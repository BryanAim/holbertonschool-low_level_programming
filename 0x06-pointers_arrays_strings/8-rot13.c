#include "holberton.h"

/**
* *rot13 - encode into 1337
* @s: array
* Return: code rot13
*/
char *rot13(char *s)
{
	char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
		if (s[i] == letras[j])
		{
			s[i] = num[j];
			break;
		}
		}
	i++;
	}
	return (s);
}
