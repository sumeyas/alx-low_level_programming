#include<stdio.h>

/**
 * main - description
 *
 * Return: value
 */
int main(void)
{
	int c = 0;
	int k = 0;
	int i = 0;
	int j = 0;

	for (c = '0'; c <= '9'; c++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				for (j = '0'; j <= '9'; j++)
				{
					if ((c + k) < (i + j) || ((c + k) == (i + j) && i != j && k == j) )
					{
						putchar(c);
						putchar(k);
						putchar(' ');
						putchar(i);
						putchar(j);
						if (!(c == '9' && k == '8' && i == '9' && j == '9'))
						{
							putchar(',');
							putchar(' ');
					}	}
				}
			}	
	}	}
	putchar('\n');
	return (0);
}
