#include<stdio.h>

/**
 * main- descr
 * Return: value
 */
int main(void)
{
	long pri = 1;
	long sec = 2;
	long sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = pri + sec;
		printf(", %lu", sum);
		pri = sec;
		sec = sum;
	}
	putchar('\n');
	return (0);
}
