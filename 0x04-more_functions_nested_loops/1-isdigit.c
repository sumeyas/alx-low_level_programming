#include "main.h"

/**
 * _isdigit - descrip
 * @c: parameter
 * Return: value
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
