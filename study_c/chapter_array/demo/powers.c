//数组删除的示例
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
	int deleteIndex = -1;	//要删除的战力值对应的元素下标,赋予初值方便判断
	int i;				//循环变量
	double newPower;
	double powers[] = {42322, 45771, 40907, 41234, 40767};
	for(i = 0; i < count; i++){
	printf("%.2lf\t",powers[i]);
	}
	printf("\n");
	printf("请输入要删除的战力值：");
	scanf("%lf",&deletePower);

	for(i = 0; i < count; i++){	
		if(deletePower == powers[i]){
			deleteIndex = i;	//将查找到的战力值所对应的元素下标记录下来
			break;		//查找到后，跳出循环
		}
	}
		//判断所输入的战力值是否存在
	if(deleteIndex == -1){
	printf("您要删除的战力值不存在！\n");
	return 1;
	}
	else{
		for(i = deleteIndex; i < count - 1; i++){
			powers[i] = powers[i + 1];
		}
	count--;
	}
	for(i = 0; i < count; i++){
	printf("%.2lf\t",powers[i]);
	}
	printf("\n");
	//新增战力值
	printf("请输入新产生的战力值：");
	scanf("%lf",&newPower);
	powers[count] = newPower;
	count++;
	for(i = 0; i < count; i++){
	
	printf("%.2lf\t",powers[i]);
	}
	printf("\n");

return 0;
}

