#include "holberton.h"
void times_table(void)
{
	int a, b, x, y, z;
	for (a = 0; a <= 9; a ++)
	{	
		for (b = 0; b <= 9; b ++)
		{
			x = a * b;
			y = x / 10 + '0';
			z = x % 10 + '0';

			if (y > 0)
			{
			_putchar(y);
			_putchar(z);
			_putchar(',');
			_putchar(' ');
			}
			else
			{
			_putchar(z);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
