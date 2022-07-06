#include<stdio.h>

int  _putchar(int ch);
void print_alphabet(void)
{
	int ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
}
