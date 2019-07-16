#include "holberton.h"
#include <stdlib.h>

/**
  * *argstostr - concatenates arguments
  * @ac: lenght
  * @av: string
  * Return: pointer.
  */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0, count = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
	}
	s = (char *)malloc((ac + count + 1) * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
		s[k] = av[i][j];
		k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
