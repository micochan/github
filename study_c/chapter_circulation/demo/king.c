/*This is while dome--this program can print the * */

#include <stdio.h>
int main(void)
{
	int i, j, k, line;
	printf("Please input line:");
	scanf("%d", &line);
	if(line <= 0){
		printf("You input line number error\n");
		return 1;
	}
	i = 0;
	
	while(i < line){
		j = line;
		while(j > i){
			printf(" ");
			j--;
		}
		k = 0;
		while(k <  2*i+1){
			printf("*");
			k++;
		}
	printf("\n");
	i++;
	}
	
return 0;
}
