//chapter6_practice5
#include <stdio.h>
int main(void)
{
int i,j,line;
char ch,temp;

printf("Please enter a uppercase:");
scanf("%c",&ch);
line = ch - 'A' +1;

    for( i = 0; i < line; ++i ){
        for(j = i; j < line; ++j){
        printf(" ");
        }
        temp = 'A';
        for(j = 0; j < i + 1;++j){
        printf("%c",temp++);
        }
        for(j = 0; j < i ; ++j){
        printf("%c",--temp);
        }

    printf("\n");
    }
return 0;
}
