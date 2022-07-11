#include "main.h"

/**
 * _strlen - description
 * @s: param
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
