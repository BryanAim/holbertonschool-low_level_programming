#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - prints al natural numbers to 98
* @n: The character to print
*
*/

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
		printf("%d, ", a);
		}
		printf("98");
		putchar('\n');
	}
	if (n > 98)
	{
		for (a = n; a > 98; a--)
		{
		printf("%d, ", a);
		}
		printf("98\n");
	}
	if (n == 98)
	{
		printf("98\n");
	}
}
