//chapter6_1
#include <stdio.h>
int main(void)
{
	int line;
	int num = 1;
	int m;

	printf("Please input the line-number to print \"$\":");
	while(scanf("%d",&line) != 1 || line <= 0){
		printf("You enter a error number,please try again:");
		scanf("%d",&line);
	}

	while(num <= line){
		m = 0;
		while(m < num){
		printf("$");
		m++;
		}
	printf("\n");
	num++;
	}

return 0;
}
