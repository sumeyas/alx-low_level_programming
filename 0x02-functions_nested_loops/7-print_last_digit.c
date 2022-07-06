#include "main.h"

/**
 * print_last_digit - description
 *
 * @n: param
 *
 * Return: value
 */
int print_last_digit(int n)
{
	int r;
	r = n % 10;
	r = r * 10 + r;
	return (r);
}

