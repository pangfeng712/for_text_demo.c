#include<stdio.h>
int main()
{
	int num = 123456;
	int rev = 0;
	while (num != 0)
	{
		int temp = num % 10;
		num = num / 10;
		rev = rev * 10 + temp;
	}
	printf("%d\n",rev);
	return 0;
}