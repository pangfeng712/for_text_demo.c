#include<stdio.h>

int main()
{
	char saying[100];
	printf("请输入您想对你亲亲女朋友的话：");
	scanf_s("%s", saying, 100);
	for (int i = 1; i <= 10; i++)
	{
		printf("%s\n",saying);
	}
	return 0;
}