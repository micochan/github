//Enter 3 integers and rank them from small to large
#include <stdio.h>
int main(void)
{
	int x,y,z,t;
	printf("Please input three integer:");
	scanf("%d %d %d",&x,&y,&z);
	printf("These 3 integers are£º%d,%d,%d!\n",x,y,z);

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
	printf("From small to large£º%d,%d,%d!\n",x,y,z);


}
