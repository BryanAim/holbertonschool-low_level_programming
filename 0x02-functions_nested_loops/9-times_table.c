#include "holberton.h"

/**
* times_table - prints the sign of a number
* @n, @b, @x, @y, @z: The character to print
*/
void times_table(void)
{
	int a, b, x, y, z;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			x = a * b;
			if (b >= 0)
			{
			if ((x / 10) >= 1)
			{
			y = x / 10;
			z = x % 10;

			_putchar(' ');
			_putchar(y + '0');
			_putchar(z + '0');
			}
			else
			{
			z = x % 10;

			_putchar(' ');
			_putchar(' ');
			_putchar(z + '0');
			}
			if (b != 9)
			{
				_putchar(',');
			}
			}
			else
			{
				_putchar ('0' + z);
				_putchar(',');
			}
		}
		_putchar('\n');
		}
}
