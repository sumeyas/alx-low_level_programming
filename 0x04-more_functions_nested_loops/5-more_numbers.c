#include "main.h"

/**
 * more_numbers - description
 */

void more_numbers(void)
{
	int i;
	int j;
	char k;
	char n;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				n = j / 10 + '0';
				_putchar(n);
				k = j % 10 + '0';
				_putchar(k);
			}
			else
			{
				ch = j + '0';
				_putchar(ch);
			}
		}
		_putchar('\n');
	}
}
