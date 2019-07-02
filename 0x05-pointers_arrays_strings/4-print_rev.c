#include "holberton.h"

int _strlen(char *ss)
{
        int tam = 0;

        while (*ss != '\0')
        {
                tam++;
		ss++;
        }
        return (tam);
}

void print_rev(char *s)
{
	int i = _strlen(s) - 1;
	
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
