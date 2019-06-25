#include "holberton.h"

/**
* print_to_98 - prints al natural numbers to 98
* @n: The character to print
*
*/

void print_to_98(int n)
{
	int a, b;
	if (n <= 98)
	{
	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
		do
		{
		if (a <= '9' && b <= '9')
		{
		_putchar(a);
		_putchar(b);
		}
		}
	while(a <= '9' && b <= '8');
		}
	}
	}
}
