#include <stdio.h>

/*题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

注意：是第n个素数到第m个素数，不是n和m之间的素数！

输入格式:
两个正整数，第一个表示n，第二个表示m。

输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
*/

int main()
{
	int n,m;
	int i,x;
	int cnt=0,sum=0;

	scanf("%d %d",&n,&m);

	for( x=2; x<1224; x++ ) {	//第两百个素数为1223
		int is=1;
		for( i=2; i<x; i++ ) {
			if( x%i==0 ) {
				is=0;
				break;
			}
		}
		if( is==1 ) {
			cnt++;
			if( cnt>=n )
				sum+=x;
			if( cnt==m )
				break;
		}
	}

	printf("%d\n",sum);

	return 0;
}
