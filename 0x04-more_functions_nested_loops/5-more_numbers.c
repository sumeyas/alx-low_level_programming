#include "main.h"

/**
 * more_numbers - description
 */

void more_numbers(void)
{
	int i;
	int j;
	char ch;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			ch = j + '0';
			_putchar(ch);
		}
		_putchar('\n');
	}
}
