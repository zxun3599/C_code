#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Count_1(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int n=Count_1(num);
	printf("%d", n);

	return 0;
}