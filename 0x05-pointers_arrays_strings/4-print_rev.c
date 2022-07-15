#include "main.h"

/**
 * print_rev - description
 * @s: parameter
 */
void print_rev(char *s)
{
	int count = 0;
	int n;

	while (s[count] != '\0')
	{
		count++;
	}

	 n = count - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
