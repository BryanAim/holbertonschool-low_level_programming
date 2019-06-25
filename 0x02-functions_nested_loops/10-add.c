#include "holberton.h"

/**
* add - adds two integers
* @a: The first character to print
* @b: The second character to print
* @c, @x, @y: The character to print
*
* Return: 1 if is positive
* If is 0 returns zero
* Otherwise return -1.
*/

int add(int a, int b)
{
	int c, x, y;

	c = a + b;
	x = c / 10;
	y = c % 10;

	_putchar(x + '0');

	return (y);
}
