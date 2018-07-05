#include <stdio.h>
void main()
{
	//note 1
	/*
	int num = 1024;
	int * ptr_num;
	ptr_num = &num;
	
	printf("num储存的值为：%d.\n",num);
	printf("num的地址为：%p.\n",&num);
	printf("ptr_num储存的值为：%p.\n",ptr_num);
	printf("ptr_num指向num的值为：%d.\n",*ptr_num);
	printf("ptr_num的地址为：%p.\n",&ptr_num);
	*/


	//note 2
	int num1 = 1024;
	int num2 = 2048;
	int *ptr_num1,*ptr_num2;

	ptr_num1 = &num1;
	ptr_num2 = &num2;
	
	printf("num1的值为：%d,内存地址为：%p.\n",num1,ptr_num1);
	printf("num2的值为：%d,内存地址为：%p.\n",num2,ptr_num2);
	//将num1的值赋给num2
	//有两种方式，1. num2 = num1; 2.*ptr_num2 = *ptr_num1;
	//*ptr_num2 = *ptr_num1;
	num2 = num1;

	printf("变更后的值：\n");	
	printf("num1的值为：%d,内存地址为：%p.\n",num1,ptr_num1);
	printf("num2的值为：%d,内存地址为：%p.\n",num2,ptr_num2);


}
