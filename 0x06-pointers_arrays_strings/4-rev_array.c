#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: numbers of elements
 */

void reverse_array(int *a, int n)
{
	int c;
	int i;

	for (i = 0; i < (n / 2); i++)
	{
	c = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = c;
	}
}
