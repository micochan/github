#include <stdio.h>
#define N 6

int main(void){

	int nums[N] = {18, 23, 2, 1, 233, 77 };
	int i,j;
	int temp;

	for(i = 0; i < N; i++){
	printf("%d ",nums[i]);
	}
	printf("\n");

	for(i = 0; i < N - 1; i++){
		for(j = 0; j < N - i - 1; j++){
			if(nums[j] > nums[j + 1]){
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < N; i++){
	printf("%d ",nums[i]);
	}
	printf("\n");
return 0;
}

