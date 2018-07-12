#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);		//函数原形

int main(void)
{
	starbar();			//使用函数
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar();			//使用函数

	return 0;
}

void starbar(void)
{
	int count;

	for(count =0; count < WIDTH; count++)
	{
		putchar('*');
	}
	printf("\n");
}

