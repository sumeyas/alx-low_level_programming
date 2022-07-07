#include "main.h"

/**
 * print_line - description
 * @n: parameter
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n = n - 1;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
}
