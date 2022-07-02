#include<stdio.h>


/*
 * main - Entry point
 *
 * Description: the program description
 *
 * Return: returns a value
 */
int main(void)
{
	int ch = 0;
	char num;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
