#include "holberton.h"
#include <stdlib.h>

/**
  * *str_concat - concatenates two strings
  * @s1: string
  * @s2: string
  * Return: pointer.
  */

char *str_concat(char *s1, char *s2)
{
	char *s;

	int i = 0, sizes1 = 0;
	int j = 0, sizes2 = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	while (*(s1 + i) != '\0')
	{
		i++;
		sizes1++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
		sizes2++;
	}
	s = (char *)malloc((sizes1 + sizes2 + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	}
	return (s);
}
