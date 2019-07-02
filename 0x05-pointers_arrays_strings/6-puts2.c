#include "holberton.h"

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
