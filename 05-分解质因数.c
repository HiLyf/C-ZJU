/*��Ŀ���ݣ�
ÿ����������������������д�ɼ���������Ҳ�ɳ�Ϊ��������˵���ʽ���⼸�������Ͷ�������������������������磬6���Ա��ֽ�Ϊ2x3����24���Ա��ֽ�Ϊ2x2x2x3��

���ڣ���ĳ���Ҫ����һ��[2,100000]��Χ�ڵ�������Ȼ����������������ֽ�ʽ���������ľ�������ʱ�����������

�����ʽ:
һ����������Χ��[2,100000]�ڡ�

�����ʽ��
���磺
n=axbxcxd
��
n=n
���еķ���֮�䶼û�пո�x��Сд��ĸx��
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
