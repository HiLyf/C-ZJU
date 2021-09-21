#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int n1=n%10, n2=n/10%10, n3=n/100;

	printf("%d", n1*100+n2*10+n3);

	return 0;
}