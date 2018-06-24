#include <stdio.h>
int main(void)
{
	int x;

    for(x = 1; (x * 5) + 50 <= 75; ++x)
        printf("%10d %10d\n", x, (x * 5) + 50);

/*
	while(n > 0)
	{
		printf("n=%d\n",n);
        n--;
		printf("Affter add, n=%d\n",n);
	}
*/
return 0;
}
