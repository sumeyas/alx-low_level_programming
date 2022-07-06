#include<stdio.h>

/**
 * fib - desc
 * @n: para
 * Return: value
 */
int fib(int n)
{
	if (n <= 1)
	{
		return (n);
	}
	return (fib(n - 2) + fib(n - 1));
}

/**
 * main- descr
 * Return: value
 */
int main(void)
{
	int n = 1;

	while (n < 50)
	{
		printf("%d", fib(n));
		getchar();
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
