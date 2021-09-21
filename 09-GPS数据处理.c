#include <stdio.h>
#include <string.h>
int main()
{
	char GPS_ARRAY[1000];
	char str1[] = "$GPRMC";
	char str2[] = "END";
	char proof[2];
	int prooftest;
	int hh, mm, ss;

	do {
		scanf("%s", GPS_ARRAY);
		if( strncmp(GPS_ARRAY, str1, 6) == 0 ) {

			int i, sum = 0;
			for( i=1; GPS_ARRAY[i]!='*'; i++ ) {
				sum = sum ^ GPS_ARRAY[i];
			}
			sum = sum % 65536;

			proof[0] = GPS_ARRAY[i+1];
			proof[1] = GPS_ARRAY[i+2];
			sscanf( proof, "%x", &prooftest );

			for( i=7; GPS_ARRAY[i]!='*'; i++ ) {
				if(GPS_ARRAY[i] == ',')	break;
			}
			if( GPS_ARRAY[i+1]=='A' && sum==prooftest ) {

				int BJT, UTC=0;
				for( i=7; i<=12; i++ ) {
					UTC = UTC*10 + (GPS_ARRAY[i] - '0');
				}
				BJT = (UTC + 80000) % 240000;

				hh = BJT/10000;
				mm = BJT/100%100;
				ss = BJT%100;
			}
		}
	} while( strcmp(GPS_ARRAY, str2) != 0 );

	if(hh < 10)	printf("0");
	printf("%d:", hh);
	if(mm < 10)	printf("0");
	printf("%d:", mm);
	if(ss < 10)	printf("0");
	printf("%d\n", ss);

	return 0;
}
