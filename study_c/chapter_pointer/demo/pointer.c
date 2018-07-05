#include <stdio.h>
void main()
{
	int num = 9;
	int * ptr_num;
	ptr_num = &num;
	printf("ptr_num储存的值为：%p.\n",ptr_num);
	printf("ptr_num指向num的值为：%d.\n",*ptr_num);





}
