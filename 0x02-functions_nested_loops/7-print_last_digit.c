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
	n = n % 10;
	n = n * 10 + n;
	return (n);
}

