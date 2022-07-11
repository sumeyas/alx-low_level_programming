#include "main.h"
/**
 * rev_string - description
 * @s: parameter
 */

void rev_string(char *s)
{
	int i;
	int len;
	char *st;
	char *end;
	char temp;

	len = _strlen(s);
	st = s;
	end = s;

	for (i = 0; i < len - 1; i++)
	{
		end++;
	}
	for (i =0; i < len / 2; i++)
	{
		temp = *end;
		*end = *st;
		*st = temp;

		st++;
		end--;
	}
}
	




