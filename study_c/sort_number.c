//输入三个整数，并将三个数从小到大排列
#include <stdio.h>
int main(void)
{
	int x,y,z,t;
	printf("Please input three integer:");
	scanf("%d %d %d",&x,&y,&z);
	printf("这三个数分别为：%d,%d,%d!\n",x,y,z);

	if(x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	if(x > z)
	{
		t = z;
		z = x;
		x = t;
	}
	if(y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("从小到大排列后：%d,%d,%d!\n",x,y,z);


}
