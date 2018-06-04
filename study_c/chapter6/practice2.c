//chapter6_practice2
#include <stdio.h>
int main(void)
{
	char n = '$';
	int i, j;

	for(i = 0; i < 5; i++){
		for(j = 0; j <= i; j++){	
		printf("%c",n);
		}
	printf("\n");
	}

return 0;
}
