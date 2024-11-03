#include<stdio.h>
int main()
{
	int i = 10;
	do {
		printf("%d\n", i);
		i++;
	} while (i <= 5);//即使不满足执行条件，但依旧先执行后判断，故至少执行循环体一次
	return 0;
	
}
