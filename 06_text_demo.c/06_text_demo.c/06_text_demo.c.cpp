//判断一个整数是不是回文数，即正序与倒序读都一样
#include<stdio.h>
int main()
{
	int num;
	printf("请输入一个整数：");
	scanf_s("%d",&num);
	int rev = 0;
	int i = num;//定义原先的num值，后续的while会改变num值
	while (num != 0)
	{
		int temp = num % 10;
	    rev = rev * 10 + temp;
		num = num / 10;
	}
	if (rev == i)
	{
		printf("该数字为回文数");
	}
	else
	{
		printf("该数字不是回文数");
	}
	return 0;
}