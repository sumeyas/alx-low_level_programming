#include "main.h"

/**
 * print_square - description
 */
void print_square(int size)
{
	int i;
	int j;
	char ch;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				ch = j + '0';
				_putchar(ch);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
