/*�����ʽ��
6λ��ʱ�䣬���Ϊ��
hh:mm:ss
���У�hh����λ����Сʱ��������λʱǰ�油0��mm����λ���ķ��ӣ�������λʱǰ�油0��ss����λ�����룬������λʱǰ�油0��

����������
024813

���������
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
