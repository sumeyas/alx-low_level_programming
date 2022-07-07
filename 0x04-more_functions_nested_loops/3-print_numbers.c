#include "main.h"

/**
 * print_numbers - desc
 */
void print_numbers(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		ch = n + '0';
		_putchar(ch);
	}
	_putchar('\n');
}
