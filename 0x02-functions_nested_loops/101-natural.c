#include<stdio.h>

/**
 * main - desc
 *
 * Return: value
 */
int main(void)
{
	int sum = 0;
	int n = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = n + sum;
		}
		n++;
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
