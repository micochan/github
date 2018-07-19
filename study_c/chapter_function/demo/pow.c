//此程序演示计算一个数的N次幂
//带参数的自定义函数
#include <stdio.h>
double p(double, int);

int main(void)
{
	double x;
	int n;
	printf("计算X的N次幂。\n请分别输入X，N：");
	scanf("%lf %d", &x, &n);
	printf("%.2lf的%d次幂的值为：%.2lf。\n", x, n, p(x, n));
	return 0;
}

double p(double num1, int num2)
{
	double result = 1;
	int i;
	for(i = 0; i < num2; i++)
	{
		result *= num1;
	}

	return result;
}
