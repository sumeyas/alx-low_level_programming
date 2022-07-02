#include<stdio.h>

/*
 * main - description
 *
 * Return: it returns value
 */
int main(void)
{
	int ch = 0;
	int num = 0;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (num = '0'; num <='9'; num++)
		{
			if (num != ch)
			{
				putchar(ch);
				putchar(num);
				if (ch+num != 89)
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
