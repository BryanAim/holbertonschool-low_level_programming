#include "holberton.h"

/**
* *_strchr - locates a character in a string
* @s: the string pointed to
* @c: the character to found
*
* Return: pointer to dest.
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		s++;
	}
	return (0);
}
