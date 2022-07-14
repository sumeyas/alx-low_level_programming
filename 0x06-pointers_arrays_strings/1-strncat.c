#include "main.h"
/**
 * _strncat - description
 * @dest: param
 * @src: param
 * @n: param
 * Return: value
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	for (len2 = 0; len2 < n && src[len2] != '\0'; len2++)
	{
		dest[len1] = src[len2];
		len1++;
	}
	return (dest);
}
