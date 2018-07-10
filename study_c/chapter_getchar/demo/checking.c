//checking.c 计算a~b之间的平方和————输入验证
#include <stdio.h>
#include <stdbool.h>

//声明3个函数
//1.验证输入的是一个正整数
long get_long(void);

//2.验证范围的上下限是否有效
bool bad_limits(long begin, long end, long low, long high);

//3.计算a~b之间的整数平方和
double sum_squares(long a, long b);
