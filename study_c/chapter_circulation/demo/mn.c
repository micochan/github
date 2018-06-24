//输入两个整数m,n，并将m~n每位相加，计算结果

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

