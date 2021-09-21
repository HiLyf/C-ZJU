/*输出格式：
6位数时间，表达为：
hh:mm:ss
其中，hh是两位数的小时，不足两位时前面补0；mm是两位数的分钟，不足两位时前面补0；ss是两位数的秒，不足两位时前面补0。

输入样例：
024813

输出样例：
10:48:13*/
#include <stdio.h>
int main()
{
	int UTC, BJT;
	int hh, mm, ss;
	scanf("%d", &UTC);

//	if( UTC<160000 ) {
//		BJT=UTC+80000;
//	} else {
//		BJT=UTC+80000-240000;
//	}
	BJT = (UTC+80000) % 240000;

	hh = BJT/10000;
	mm = BJT/100%100;
	ss = BJT%100;

	printf("%02d:%02d:%02d", hh, mm, ss);

	return 0;
}
