//chapter6_practice4
#include <stdio.h>
int main(void)
{
	char ch = 'A';
	int i, j;

	for(i = 0; i < 6; i++){
		for(j = 0; j <= i; j++){	
		printf("%c",ch++);
		}
	printf("\n");
	}

return 0;
}
