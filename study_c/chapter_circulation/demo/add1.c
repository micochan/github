//计算n+(n-1)+(n-2)...3+2+1

#include <stdio.h>
int main(void)
{
	int num = 0;		//用户输入的正整数
	int i;			//循环变量
	int sum;		//累加和
	
	printf("请输入一个正整数：");
	scanf("%d",num);

	while(num < 0){
	printf("输入错误，请重新输入：");
	scanf("%d",num);
	}	



return 0;
}
