#include <stdio.h>
#define N 5   //要删减的数组元素长度不能使用符号常量

int main(void){
	/*
 	删除的逻辑
	12 34 23 67 9
	12 34 67 9  9
	1.查找要删除的数字的元素下标2
	2.从下标开始，后面一个覆盖前面一个数字
	3.数组的总长度－1
    */

	int count = 5;		//数组元素长度不能使用变量
	double deletePower;	//用户所要删除的战力值
	int deleteIndex;	//要删除的战力值对应的元素下标
	int i;				//循环变量
	double powers[] = {42322, 45771, 40907, 41234, 40767};
	printf("请输入要删除的战力值：");
	scanf("%lf",&deletePower);

	for(i = 0; i < count; i++){	
		if(deletePower == powers[i]){
			deleteIndex = i;	//将查找到的战力值所对应的元素下标记录下来
			break;		//查找到后，跳出循环
		}
	}
	printf("%d",deleteIndex);
return 0;
}

