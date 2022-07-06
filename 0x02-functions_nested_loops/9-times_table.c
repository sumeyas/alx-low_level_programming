#include "main.h"

/**
 * times_table - descr
 */
void times_table(void)
{
	int i;
	int j;
	int ch;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ch = i * j;
			_putchar(ch);
			_putchar(',');
			_putchar(' ');
		}
	}
}
