#include "holberton.h"
#include <stdlib.h>

/**
  * *create_array - create array os chars
  * @size: size
  * @c: character
  * Return: array.
  */



char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
	return (0);
	}
	s = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
	*(s + i) = c;
	if (s[i] == '\0')
	{
		return (0);
	}
	}
	return (s);
}
