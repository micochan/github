//����һ����λ����������ÿλ��ӣ�������
//����1234�����Ϊ10

#include <stdio.h>
int main(void)
{
	int x;
	printf("Please input the four-digit integer:");
	scanf("%d",&x);
	printf("\nThe integer:%d sum of each digit:%d. ",x,(x / 1000) + (x / 100 % 10) + (x / 10 % 10) + (x % 10));
	
	return 0;

}

