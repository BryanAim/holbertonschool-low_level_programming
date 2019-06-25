#include "holberton.h"
/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line.
* @x for number
* @y for letter
*/
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (y = '0'; y <= '9'; y++)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	}
}
