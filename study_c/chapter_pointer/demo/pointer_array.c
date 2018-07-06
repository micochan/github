//指针与数组
//note 1

#include <stdio.h>
int main(void)
{
	int num[] = {34, 45, 71, 33, 2};
	int * ptr_num;
	ptr_num = num;		//数组的名称就是首元素内存地址，等同于ptr_num = &num[0]
	int i;
	
	//用指针方式一 (推荐使用)
	printf("指针方式一\n");
	for(i = 0; i < 5; i++){
	printf("num[%d]的值为:%2d,内存地址为:%p。\n", i, *(ptr_num + i), ptr_num + i);
	}
	printf("**************************************\n");	
	//用指针方式二 (使用这种方式，指针的指向会随之变化，需要重置指针的指向)
	printf("指针方式二\n");
	for(i = 0; i < 5; i++){
	printf("num[%d]的值为:%2d,内存地址为:%p。\n", i, *ptr_num++, &num[i]);
	}
	printf("**************************************\n");	
	//用类似数组的方式
	ptr_num = num;  //重置指针指向num[]
	printf("用数组\n");
	for(i = 0; i < 5; i++){
	printf("num[%d]的值为:%2d,内存地址为:%p。\n", i, ptr_num[i], num + i);
	}
	printf("**************************************\n");	
return 0;
}
/*
	note 1 总结
	1.数组num[i]的地址：
		&num[i] 或者 num + i;
	2.数组num[i]的值：
		num[i] 或者 *(num + i) 也可以使用 *num++
	3.为指向数组的指针赋值：
		int * ptr_num = num; 或 int * ptr_num = &num[0];
	4.指针变量可以指向数组元素：
		int * ptr_num = &num[4]; 或 int * ptr_num = num + 4;
*/
