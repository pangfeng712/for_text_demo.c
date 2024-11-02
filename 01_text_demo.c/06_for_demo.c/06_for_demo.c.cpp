#include<stdio.h>	
int main()
{
	int num;
	printf("请输入一个数字：");
	scanf_s("%d", &num);
	while (num>1&&num%2==0)
	{
		num = num / 2;				
	}
	if (num == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}