#include "holberton.h"

void _puts(char *str)
{
	char *t = str;
	while(*t != '\0')
	{
		_putchar(*t);
	t++;
	}
	_putchar('\n');
}
