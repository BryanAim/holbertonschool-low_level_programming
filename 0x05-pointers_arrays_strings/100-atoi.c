#include "holberton.h"

int _atoi(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	int entero = 0;
	int signo = 1;
	int i = 0;
	if (s[0] == '-')
	{
		signo = -1;
		i++;
	}
	for (i = 0; i <= s[i]; ++i)
	{
		if (s[i] != '\0')
		{
			entero = entero * 10 + s[i] - '0';

		}
	}
return (signo * entero);
}
