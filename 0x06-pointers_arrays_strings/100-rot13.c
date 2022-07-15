#include "main.h"
/**
 * rot13 - desc
 * @s: string
 * Return: value
 */
char *rot13(char *s)
{
	int i;
	int j;
	char en1[] = "aAbBcCdDeEfFgGhHIijJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char en2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; en1[j]; j++)
		{
			if (s[i] == en1[j])
			{
				s[i] = en2[j];
				break;
			}
		}
	}
	return (s);
}
