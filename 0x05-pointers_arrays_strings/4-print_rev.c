#include "main.h"

/**
 * print_rev - description
 * @s: parameter
 */
void print_rev(char *s)
{
	int n = _strlen(s) - 1;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		char c = s[i];
		s[i] = s[n-i];
		s[n-i] = c;
		_putchar(s[i]);
	}
	_putchar('\n');
}
