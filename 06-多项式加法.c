/*题目内容：
一个多项式可以表达为x的各次幂与系数乘积的和，比如：
    2x6+3x5+12x3+6x+20
现在，你的程序要读入两个多项式，然后输出这两个多项式的和，也就是把对应的幂上的系数相加然后输出。
程序要处理的幂最大为100。

输入格式:
总共要输入两个多项式，每个多项式的输入格式如下：
每行输入两个数字，第一个表示幂次，第二个表示该幂次的系数，所有的系数都是整数。
第一行一定是最高幂，最后一行一定是0次幂。注意第一行和最后一行之间不一定按照幂次降低顺序排列；
如果某个幂次的系数为0，就不出现在输入数据中了；0次幂的系数为0时还是会出现在输入数据中。

输出格式：
从最高幂开始依次降到0幂，如：
2x6+3x5+12x3-6x+20
注意其中的x是小写字母x，而且所有的符号之间都没有空格，如果某个幂的系数为0则不需要有那项。

输入样例：
6 2
5 3
3 12
1 6
0 20
6 2
5 3
2 12
1 6
0 20

输出样例：
4x6+6x5+12x3+12x2+12x+40
*/
#include <stdio.h>
int main()
{
	int a[101] = {0};
	int x,y;
	int cnt,cnt2=0;

	for( cnt=0; cnt<2; ) {
		scanf("%d %d", &x, &y);
		if( x>=0 && x<=100 && y!=0 ) {
			a[x] += y;
		}
		if( x==0 )
			cnt++;
	}

	for( x=100; x>=1; x-- ) {
		if( a[x]>0 && a[x]!=1 && x!=1 ) {
			cnt2++;
			if( cnt2!=1 )	printf("+");
			printf("%dx%d", a[x], x);
		} else if( a[x]>0 && a[x]!=1 && x==1 ) {
			cnt2++;
			if( cnt2!=1 )	printf("+");
			printf("%dx", a[x]);
		}
		if( a[x]==1 && x!=1 ) {
			cnt2++;
			if( cnt2!=1 )	printf("+");
			printf("x%d", x);
		} else if( a[x]==1 && x==1 ) {
			cnt2++;
			if( cnt2!=1 )	printf("+");
			printf("x");
		}
		if( a[x]<0 && a[x]!=-1 ) {
			cnt2++;
			if( x==1 )
				printf("%dx", a[x]);
			else
				printf("%dx%d", a[x], x);
		} else if( a[x]==-1 ) {
			cnt2++;
			if( x==1 )
				printf("-x");
			else
				printf("-x%d", x);
		}
	}

	if( a[0]>0 ) {
		if( cnt2!=0 )	printf("+");
		printf("%d", a[0]);
	} else if( a[0]==0 ) {
		if( cnt2!=0 )	printf("+");
		printf("0");
	} else
		printf("%d", a[0]);

	return 0;
}
