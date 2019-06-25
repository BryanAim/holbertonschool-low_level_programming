#include "holberton.h"

/**
* print_sign - prints the sign of a number
* @n: The character to print
*
* Return: 1 if is positive
* If is 0 returns zero
* Otherwise return -1.
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
	return (0);
}
