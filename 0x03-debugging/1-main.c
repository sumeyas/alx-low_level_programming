#include<stdio.h>

/**
 * main - description
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 10)/*i is not incrementing*/
	{
		putchar(i);
	}

	printf("infinite loop avoided! \\o/\n");

	return (0);
}
