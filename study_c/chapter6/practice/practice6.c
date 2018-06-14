//chapter6_practice6
#include <stdio.h>
int main(void)
{
int min,max;

printf("Please enter two number:");
scanf("%d %d",&min,&max);
for(min; min <= max; min++){
printf("%10d%10d%10d\n", min, min * min, min * min * min);
}
return 0;
}
