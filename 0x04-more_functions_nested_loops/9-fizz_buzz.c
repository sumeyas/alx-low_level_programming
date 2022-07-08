#include<stdio.h>

/**
 * main - description
 * Return: value
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	return (0);
}
