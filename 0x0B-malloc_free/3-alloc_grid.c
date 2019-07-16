#include "holberton.h"
#include <stdlib.h>

/**
  * **alloc_grid - pointer 2 dimensional array
  * @width: width
  * @height: height
  * Return: pointer.
  */

int **alloc_grid(int width, int height)
{
	int **s;
	int i;

	if (width <= 0 || height <= 0)
		return ('\0');
	s = (int **)malloc(height * sizeof(int *));
	if (s == NULL)
	{
		return (NULL);
		free(s);
	}
	for (i = 0; i < width; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			return (NULL);
			free(s);
		}
	}
	return (s);
}
