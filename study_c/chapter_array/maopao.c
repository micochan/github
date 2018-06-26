#include <stdio.h>
#define N 6

int main(void){

	int nums[N] = {18, 23, 2, 1, 233, 77 };
	int i,j;
	int temp;

	for(i = 0; i < N - 1; i++){
		for(j = 0; j < N - i - 1; j++){
			if(nums[i] < nums[i + 1]){
				temp = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = temp;
			}
		}
	}
	for(i = 0; i < N - 1; i++){
	printf("%d ",nums[i]);
	}
return 0;
}

