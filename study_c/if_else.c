/*IF-ELSE's used*/

#include <stdio.h>
int main(void)
{
   /*  int a,b,max;
    printf("电脑将自动判断出你所输入的整数，而输出大的数！\n请输入两个整数：");
    scanf("%d %d",&a,&b);
    max = a;
    if(a > b){
        printf("bigger number is：%d\n",max);
        }
    else{
        max = b;    
        printf("bigger number is：%d\n",max);
        }
    */
	int a,b,x,y;
  	printf("please input two intager:");
	scanf("%d %d",&a,&b);
	x = a / b;
	y = a % b;
	printf("a除以b的商为%d,余数为%d。\n",x,y);	
	
	
	
	
	
	
	return 0;
}

