#include "main.h"

/**
 * _isalpha - description
 *
 * @c: the parameter
 *
 * Return: value
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
