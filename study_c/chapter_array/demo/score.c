#include <stdio.h>
#define N 5
int main(void){
	int score[N];
	int i;

	for(i = 0; i < N; i++)
	{
		printf("Please input the %d score:", i + 1);
		scanf("%d",&score[i]);
	}
	for(i = 0; i < N; i++)
	{
		printf("The %d score is %d.\n", i + 1, score[i]);
	}
return 0;

}

