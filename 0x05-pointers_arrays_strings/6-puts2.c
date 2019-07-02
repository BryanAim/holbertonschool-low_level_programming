#include "holberton.h"

/**
  * puts2 - one char out of 2
  * @str: string
  */

void puts2(char *str)
{
	int c;

	while (*str != '\0')
	{
	c = *str;
	if (c % 2 == 0)
	{
		_putchar(c);
	}
	str++;
	}
	_putchar('\n');
}
