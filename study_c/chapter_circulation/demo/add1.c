//计算n+(n-1)+(n-2)...3+2+1

#include <stdio.h>
int main(void)
{
	int num;		//用户输入的正整数
	int i;			//循环变量
	int sum;		//累加和
	printf("请输入一个正整数：");
	scanf("%d",&num);
	while(num <= 0){                //判断输入的数是否为正整数，如果不是，重新输入
		printf("输入错误，请重新输入：");
		scanf("%d",&num);
	}
	while(i <= num){
		sum += i;
		i++;		
	}
	printf("从%d到1所有整数相加的和为:%d.\n",num,sum);
return 0;
}
