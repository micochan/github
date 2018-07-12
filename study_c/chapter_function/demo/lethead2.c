#include <stdio.h>
#include <string.h>				//为strlen()提供原型
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);		//带参数的函数原形

int main(void)
{
	int spaces;
	show_n_char('*', WIDTH);			//使用函数
	printf("\n");

	show_n_char(SPACE, 12);
	printf("%s\n", NAME);
	
	spaces = (WIDTH - strlen(ADDRESS)) / 2;
	show_n_char(' ', spaces);
	printf("%s\n", ADDRESS);


	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
	printf("%s\n", PLACE);
	show_n_char('#', WIDTH);			//使用函数
	printf("\n");
	return 0;
}

//定义show_n_char函数
void show_n_char(char ch, int num)
{
	int count;

	for(count = 0; count < num; count++)
		putchar(ch);
}

