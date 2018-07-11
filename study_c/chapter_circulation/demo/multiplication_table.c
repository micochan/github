#include <stdio.h>
int main(void){
	int i,j;
	printf("乘法表：\n X |");
	for(i = 0; i < 9; i++)
		{
		printf("\t%d", i + 1);
		}
	printf("\n---|-----------------------------------------------------------------------------\n");

	for(i = 0; i < 9; i++)
	{
		printf(" %d |", i + 1);
		for(j = 0; j < 9; j++)
		{
			printf("\t%d", (j + 1) * (i + 1));
		}
		printf("\n");
	}
	return 0;
}
