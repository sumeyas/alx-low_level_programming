#include "main.h"
/**
 * _strcmp - description
 * @s1: param
 * @s2: param
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
