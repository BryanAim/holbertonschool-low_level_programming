#include "holberton.h"
#include <stdlib.h>

/**
  * *array_range - array of integers
  * @min: minimun
  * @max: maximun
  * Return: pointer to array
  */

int *array_range(int min, int max)
{
	int *s, result, i;

	result = max - min;

	if (min > max)
		return (0);
	s = malloc((result + 1) * sizeof(int));
	if (s == NULL)
		return (0);
	for (i = 0; i <= result; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
