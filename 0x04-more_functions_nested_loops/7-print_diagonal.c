#include "holberton.h"

/**
  * print_line - draws a straight line
  * @n: number of lines
  */

void print_diagonal(int n)
{
	int l;

	for (l = 1; l <= n; l++)
	{
		if  (l == n)
		{
		_putchar('\\');
		_putchar('\n');
		}
		else
		{
		_putchar(' ');
		}
	}
		_putchar('\n');
}
