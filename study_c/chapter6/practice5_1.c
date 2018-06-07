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
char temp;

	printf("Please input a uppercase latter:");
	scanf("%c",&ch);

	line = ch - 'A' +1;
    while(num < line){

        space = line;
        while(space >= num + 1){
        printf(" ");
        space--;
        }

		down = num + 'A';
        while(down >= 'A'){
        printf("%c",down);
        down--;
        }
        temp = 'A';
		up = 0;
        while(up < num){
        printf("%c",++temp);
        up++;
        }

	printf("\n");
    num++;
    }

return 0;
}
