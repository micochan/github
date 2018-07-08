//皇帝选妃


#include <stdio.h>
#define MAX 6
int main(void){
	int i;					//循环变量
	int count = 5;			//当前未被打入冷宫的妃子个数
	

	//使用字符数组表示字符串
	char emperorName[50];	//皇帝名号	
	int choice;				//皇帝的选择1-4之间

	//嫔妃的数据
	char names[MAX][20] = {"西施", "杨玉环", "阿优", "小泽玛丽亚", "小妞"};	//嫔妃的名字
	char levelNames[5][10] = {"贵人", "嫔妃", "贵妃", "皇贵妃", "皇后"};	//嫔妃的级别
	int levels[MAX] = {1, 2, 0, 0, 0, -1};										//用来存放每位妃子的级别，每个元素对应每个妃子的当前级别
	int loves[MAX] = {100, 100, 100, 100, 100, -1};							//每个妃子的好感度，初始值都为100。-1留着新增妃子用


	//测试

	/*
	printf("测试代码：查看嫔妃状态\n");
	printf("%-12s\t级别\t好感度\n","姓名");
	for (i = 0; i < count; i++){
	printf("%-12s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);

	}
	*/

	printf("请输入登基的皇帝名号：");
	scanf("%s",emperorName);	//录入字符串时，不需要&符号
	printf("皇帝：%s驾临，有事说事，无事退朝！！\n", emperorName);	

	printf("1.皇帝下旨选妃：\t\t(增加功能)\n");
	printf("2.翻牌宠幸：\t\t\t(修改状态功能)\n");
	printf("3.打入冷宫：\t\t\t(删除功能)\n");
	printf("4.单独召见爱妃：\n");
	printf("陛下请选择：");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1://1.皇帝下旨选妃：\t\t(增加功能)\n
			//1.增加前先判断数组有没有空间
			//2.增加数组元素（names,levels,loves）
		break;
		
		case 2:
		printf("2.翻牌宠幸：\t\t\t(修改状态功能)\n");
	
		break;

		case 3:
		printf("3.打入冷宫：\t\t\t(删除功能)\n");
	
		break;

		case 4:
		printf("4.单独召见爱妃：\n");
	
		break;

		default:
		printf("君无戏言，陛下请再次确认！\n"); 
	}







return 0;
}
