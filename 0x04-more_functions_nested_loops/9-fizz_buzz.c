#include<stdio.h>

/**
 * main - description
 * Return: value
 */
int main (void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
}
