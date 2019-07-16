#include "holberton.h"
#include <stdlib.h>

/**
  * *_strdup - pointer to allocated space in memory
  * @str: string
  * Return: pointer.
  */

char *_strdup(char *str)
{
	char *s;
	int i = 0, size = 0;

	while (*(str + i) != '\0')
	{
		i++;
		size++;
	}
	s = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
	*(s + i) = *(str + i);
	}
	i = 0;
	for (i = 0; i < size; i++)
	{
	if (*(s + i) != '\0')
	{
	return (s);
	}
	}
	return (0);
}
