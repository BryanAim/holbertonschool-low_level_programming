#include "holberton.h"

/**
* print_last_digit - prints the last digit of a number
* @r: The character to print
*
* Return: the value of the last digit.
*/
int print_last_digit(int r)
{
	if (r < 0)
	{
	r = r * -1;
	}

	r = r % 10;
	_putchar(r + '0');
	return  (r);
}
