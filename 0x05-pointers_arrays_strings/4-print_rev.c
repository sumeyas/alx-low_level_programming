#include "main.h"

/**
 * print_rev - description
 * @s: parameter
 */
void print_rev(char *s)
{
	int count = 0;
	int i;
	int n;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	 n = count - 1;
	for (i = 0; i < n / 2; i++)
	{
		char tmp = s[i];
		s[i] = s[n - i];
		s[n - i] = tmp;
		_putchar(s[i]);
	}
	
	_putchar('\n');
}
