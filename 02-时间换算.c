#include <stdio.h>

main()
{
	int UTC,BJT;
	scanf("%d",&BJT);
	if(BJT>=800)
		UTC=BJT-800;
	else
		UTC=BJT+2400-800;
	printf("%d\n",UTC);
	return 0;
}