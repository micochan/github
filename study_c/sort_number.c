//��������������������������С��������
#include <stdio.h>
int main(void)
{
	int x,y,z,t;
	printf("Please input three integer:");
	scanf("%d %d %d",&x,&y,&z);
	printf("���������ֱ�Ϊ��%d,%d,%d!\n",x,y,z);

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
	printf("��С�������к�%d,%d,%d!\n",x,y,z);


}
