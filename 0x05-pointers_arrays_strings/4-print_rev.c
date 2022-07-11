#include "main.h"

/**
 * print_rev - description
 * @s: parameter
 */
void print_rev(char *s)
{
	int count = 0;
	int n;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	 n = count;
	while (n > 0)
	{
		_putchar(*(s + n));
		n--;
	}
	
	_putchar('\n');
}
