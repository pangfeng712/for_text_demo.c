//给一个非负整数x，计算并返回x的算术平方根。
//结果只保留整数部分，小数部分被舍弃
#include<stdio.h>
int main()
{
	int num;
	printf("请输入一个非负整数：");
	scanf_s("%d",&num);
	if (num < 0)
	{
		printf("该数为负数，不符合题意。");
	}
	else
	{
		int a = 1;
		while (a*a<=num)
		{
			a++;
		}
		printf("%d\n",a-1);
	}
	return 0;
}