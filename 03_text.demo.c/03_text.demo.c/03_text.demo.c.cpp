#include<stdio.h>
int main()
{
	int height = 8844430;
	double paper = 0.1;
	int count = 0;
	while (paper <= height)//小括号内跟结束条件反过来
	{
		paper=paper*2;
		count++;
	}
	printf("%d\n",count);
	return 0;
}