//������������m,n������m~nÿλ��ӣ�������

#include <stdio.h>
int main(void)
{
	int m,n,t;
	int sum = 0;
	printf("Please input the two integers:");
	scanf("%d %d",&m,&n);

	if(m > n){
			t = m;
			m = n;
			n = t;
	}

	while(m <= n){
			sum += m++;
	}

	printf("the m~n add sum=%d\n",sum);
	return 0;

}

