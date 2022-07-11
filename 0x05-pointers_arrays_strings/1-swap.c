#include "main.h"

/**
 * swap_int - description
 * @a: param
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int t = 0;

	t = *a;
	*a = *b;
	*b = t;
}
