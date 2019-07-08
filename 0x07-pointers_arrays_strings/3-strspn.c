#include "holberton.h"

/**
* *_strchr - locates a character in a string
* @s: the string pointed to
* @c: the character to found
*
* Return: pointer to dest.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (j = 0; accept[j] != '\0'; j++)
	{
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[j])
		{
			if (i >= n)
			{
			n = i + 1;
			}
		break;
		}
		}
	i++;
	}
	return (n);
}
