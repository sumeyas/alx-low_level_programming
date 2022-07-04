#include<stdio.h>

/**
 * main - description
 *
 * Return: value
 */
int main(void)
{
	int c = 0;
	int i = 0;
	int j = 0;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				putchar(c);
				putchar(i);
				putchar(' ');
				putchar(i);
				putchar(j);
				if (!(c == '9' && i == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
