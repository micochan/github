//chapter6_practice5
#include <stdio.h>
int main(void)
{
int line;
int num = 0;
int space;
int up;
int down;
char ch;

printf("Please input a uppercase latter:");
scanf("%c",&ch);
line = ch - 'A' +1;
    while(num < line){

        space = line;
        while(space >= num){
        printf(" ");
        space--;
        }
        down = num + 'A';
        while(down >= 'A'){
        printf("%c",down);
        down--;
        }
        up = num+'A';
        while(up > 'A' && up - 'A' <= num){
        printf("%c",up);
        up++;
        }
    printf("\n");
    num++;
    }
return 0;
}
