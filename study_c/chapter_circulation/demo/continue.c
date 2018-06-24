#include <stdio.h>
int main(void)
{
	int age;
	int i;
	int count = 0;
	for(i = 0; i < 5; i++)
	{
	printf("Please input a age:");
	scanf("%d",&age);
		if(age >= 0){
		continue;
		}else{
			count++;
		}
	}
	printf("The error age of you input %d time(s).\n",count);
return 0;
}
