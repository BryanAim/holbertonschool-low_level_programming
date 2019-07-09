#include "holberton.h"

/**
  * *cap_string - capitalize words
  * @s: array
  * Return: uppercase
  */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i - 1] == 32 || s[i - 1] == 10 || s[i - 1] == 9
		|| s[i - 1] == 46 || (s[0] >= 'a' && s[0] <= 'z'))
		&& (s[i] >= 'a' && s[i] <= 'z'))
		{
		s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
