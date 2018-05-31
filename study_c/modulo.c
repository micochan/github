//Input four integer, then sum each number
//demo: 1234, result is: 10

#include <stdio.h>
int main(void)
{
	int x;
	printf("Please input the four-digit integer:");
	scanf("%d",&x);
	printf("\nThe integer:%d sum of each digit:%d.\n",x,(x / 1000) + (x / 100 % 10) + (x / 10 % 10) + (x % 10));
	
	return 0;

}

