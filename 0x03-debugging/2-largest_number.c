#include "main.h"

/**
 * largest_number - returns the largest
 * @a: first integer
 * @b: second
 * @c: third
 * Return: largest number
 */

int largest_number(int a; int b; int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > C)
	{
		largest = b;
	}
	else 
	{
		largest = c;
	}

	return (largest);
}
