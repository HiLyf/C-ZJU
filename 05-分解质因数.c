/*题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。

现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

输入格式:
一个整数，范围在[2,100000]内。

输出格式：
形如：
n=axbxcxd
或
n=n
所有的符号之间都没有空格，x是小写字母x。
*/
#include <stdio.h>
#include <math.h>

void factorization(int n);

int main()
{
	int n;
	scanf("%d",&n);

	factorization(n);

	return 0;
}

void factorization(int n)
{
	int i;

	printf("%d=",n);
	for( i=2; i<=sqrt(n); i++ ) {
		if( n%i==0 ) {
			n/=i;
			printf("%dx",i--);
		}
	}
	printf("%d",n);
}
