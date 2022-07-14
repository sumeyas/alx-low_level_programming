#include "main.h"

/**
 * *_strcat - description
 * @dest: param
 * @src: param
 * Return: value
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		dest[len1 + len2] = src[len2];
		len2++;
	}
	len1++;
	return (dest);
}

