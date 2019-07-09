#include "holberton.h"

/**
* *_strstr - locates a substring
* @haystack: the string pointed to
* @needle: substring
*
* Return: pointer to beginning of substring.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack)
	{
		if (haystack[i] == needle[j])
		{
			j++;
		return (haystack + i + 1 - j);
		}
	else
	{
		j = 0;
		i++;
	}
	}
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	return (0);
}
