#include "holberton.h"

/**
* *_strpbrk - locates first occurance in a string
* @s: the string pointed to
* @accept: the character to found
*
* Return: pointer to dest.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (haystack[i] == needle[j])
		{
		return (haystack + i);
		}
	}
	i++;
	}
	return (0);
}
