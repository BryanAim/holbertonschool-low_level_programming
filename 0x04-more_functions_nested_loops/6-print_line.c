#include "holberton.h"

/**
  * print_line - draws a straight line
  * @n: number of lines
  */

void print_line(int n)
{
	int l;

	for (l = 1; l <= n; l++)
	{
			_putchar('_');
	}
		_putchar('\n');
}
