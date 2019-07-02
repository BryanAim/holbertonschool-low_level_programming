#include <stdio.h>
#include "holberton.h"

/**
* print_array - prints half string
* @a: string
* @n: characther
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d, ", a[i]);
	}
}
