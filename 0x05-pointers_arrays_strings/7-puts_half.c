#include "holberton.h"

void puts_half(char *str)
{
	int tam = 0;
	int i;

	while (str[tam] != '\0')
	{
		tam++;
	}
	for(i = (tam / 2); i < tam; i++)
	{

	_putchar(str[i]);
	}
	_putchar('\n');
}
