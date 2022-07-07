#include "main.h"

/**
 * _isdigit - descrip
 * @c: parameter
 * Return: value
 */

int _isdigit(int c)
{
	char ch = c + '0';

	if (ch <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
