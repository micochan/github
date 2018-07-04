//The two-dimensional array.二维数组
#include <stdio.h>
#define MONTHS 12   //The month of a year.每年12个月
#define YEARS	5	//5 years.总共5年

void main()
{
	//2010~2014 amount of precipitation initialize array.　用2010~2014年的降水量数据初始化数组
	const float rain[YEARS][MONTHS] = 
		{
			{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
			{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
			{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
			{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
			{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
		};	
	int year, month;//循环变量year，month ,外层循环控制行，内层循环控制列
	float subtotal, total;   //每一年的降水量合计，５年总降水量合计

	printf(" YEAR	RAINFALL (inches)\n");
	for(year = 0, total = 0; year < YEARS;	year++)
	{				//每一年，各月的降水量总和
		for(month = 0, subtotal = 0; month < MONTHS; month++)
			{
			subtotal += rain[year][month];
			}
		
		printf("%5d %15.1f\n", 2010 + year, subtotal);
		total += subtotal;  //5年的总降水量 
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS); //5年平均每年的降水量
	printf("MONTHLY AVERAGE:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct");
	printf(" Nov Dec\n");

	for(month = 0; month < MONTHS; month++)		//每月5年平均降水量
	{
		for(year = 0, subtotal = 0; year < YEARS; year++)
		{
			subtotal += rain[year][month];	
		}	
		printf("%4.1f", subtotal / YEARS);
	}
	printf("\n");
}
