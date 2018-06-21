#include <stdio.h>
int main(void){

int i = 1;
int sum = 0;

	while(i < 101){
	sum = sum + i;
	printf("Print time: %3d, and the sum is: %5d.\n",i,sum);
   	i++;
	}
}
