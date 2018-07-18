#include <stdio.h> //函数递归
void up_and_down(int);		//函数原形

int main(void)
{
	up_and_down(1);			//调用函数
	return 0;
}


void up_and_down(int n)		//函数定义
{
	printf("Level %d: n location %p.\n", n, &n);
	if(n < 4)
		up_and_down(n + 1);	//调用函数自身			
	printf("Level %d: n location %p.\n", n, &n);
}
