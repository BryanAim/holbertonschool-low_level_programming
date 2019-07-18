#include "holberton.h"
#include <stdlib.h>

/**
  * *string_nconcat - concatenates two strings
  * @s1: string
  * @s2: string
  * @n: number os characters
  * Return: pointer.
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i = 0, sizes1 = 0;
	unsigned int j = 0, sizes2 = 0;

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
	if (n >= sizes2)
		n = sizes2;

	s = (char *)malloc((sizes1 + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < sizes1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}
