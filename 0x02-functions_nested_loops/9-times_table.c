#include "main.h"

/**
 * times_table - descr
 */
void times_table(void)
{
	int i;
	int j;
	int ch;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			ch = '0' + r;
			_putchar(ch);
			_putchar(',');
			_putchar(' ');
		}
	}
}
