#include<stdio.h>

/**
 * main - description
 *
 * Return: it returns value
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9';j++)
		{
			if (i < j){
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
