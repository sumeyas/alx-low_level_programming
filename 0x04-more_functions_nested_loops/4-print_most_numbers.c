#include "main.h"

/**
 * print_most_numbers - description
 */

void print_most_numbers(void)
{
	int n;
	char ch;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 || n != 4)
		{
			ch = n + '0';
			_putchar(ch);
		}
	}
	_putchar('\n');
}	
