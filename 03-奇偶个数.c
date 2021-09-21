#include <stdio.h>

int main()
{
	int n1,n2;
	int cnt1=0,cnt2=0;
	
	scanf("%d",&n1);
	while(n1 != -1){
		n2=n1%10;
		if(n2>0&&n2%2==1)
			cnt1++;
		else if(n2>=0&&n2%2!=1&&n1>0)
			cnt2++;
		scanf("%d",&n1);
	}
	printf("%d %d",cnt1,cnt2);
	return 0;
}