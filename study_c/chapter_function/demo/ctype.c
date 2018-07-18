//几种常用的函数学习

//1. <ctype.h> 中的
// int isupper(int)	返回传入的字符是否为大写字母（0为假，非0为真）
// int islower(int)	返回传入的字符是否为小写字母
// int isalpha(int)	返回传入的字符是否为字母（a-z|A-Z）
// int isdigit(int)	返回传入的字符是否为数字
// int toupper(int)	返回对应的大写字母
// int tolower(int)	返回对应的小写字母

#include <stdio.h>
#include <ctype.h>

int main(void)
{
/*
	printf("%d\n", isupper('a'));
	printf("%d\n", islower('A'));
	printf("%d\n", isalpha('1'));
	//如果传入的是数字，表示的是ASCII码
	printf("%d\n", isdigit(50));

	//转换大小写
	printf("大写：%c.\n", toupper('n'));

	//打印所有的ASCII码（0-126）
	int i;
	for(i = 0; i < 127; i++)
	{
		printf("ASCII码为：%d的时候，对应的字符为：%c.\n", i, i);
	}
*/
	int money, count = 0;

	int moneys[6];
	int i;
	
	char unit[10][4] = {"零", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖"};
	
	printf("请输入金额：");
	scanf("%d", &money);
	while(money != 0)
	{
		moneys[i] = money % 10;
		money /= 10;
		i++;
		count++;
	}
	printf("用户输入了%d位数字.\n", count);
	printf("数组中的内容：\n");
	for(i = 0; i < count; i++)
	{
		printf("%d - %s\n", moneys[i], unit[moneys[i]]);

	}
	return 0;

}
