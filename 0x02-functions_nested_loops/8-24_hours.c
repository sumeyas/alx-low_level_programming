#include "main.h"


void jack_bauer(void)
{
	int i;
	int j;
	int h;
	int m;

	for (h = '0'; h <= '2'; h++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (i = '0'; i < '6'; i++)
				{
					for (j = '0'; j <= '9'; j++)
						{
							if (h == 2 && m == 3 && i == 5 && j == 9)
							{
								break;
							}
							else
							{
								_putchar(h);
								_putchar(m);
								_putchar(':');
								_putchar(i);
								_putchar(j);
								_putchar('\n');
							}
						}
				}
		}
	}
}
