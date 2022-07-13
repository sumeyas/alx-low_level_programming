#include "main.h"

/**
 * _strcat - description
 * @dest: param
 * @src: param
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (dest != '\0')
	{
		len1++;
	}
	while (src != '\0')
	{
		len2++;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return dest;
}

