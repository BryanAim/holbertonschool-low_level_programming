#include "holberton.h"

/**
* *leet - encode into 1337
* @s: array
* Return: number
*/
char *leet(char *s)
{
	char letras[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
		if (s[i] == letras[j])
		{
			s[i] = num[j];
		}
		}
	i++;
	}
	return (s);
}
