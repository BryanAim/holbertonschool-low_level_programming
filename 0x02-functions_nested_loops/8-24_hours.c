#include "holberton.h"

/**
* jack_bauer - prints every minute on a day
* @a, @b, @c, @d, @x:  digit
*/
void jack_bauer(void)
{
	int a, b, c, d, x;

	for (a = 0; a <= 2 ; a++)
	{
		for (b = 0; b <= x; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar (a + '0');
					_putchar (b + '0');
					_putchar (':');
					_putchar (c + '0');
					_putchar (d + '0');
					_putchar ('\n');
				}
			}
		if (!(a == 2 && c && 5 && d == 9))
		{
			x = 3;
		}
		}
	}
}


