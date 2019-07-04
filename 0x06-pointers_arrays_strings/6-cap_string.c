#include "holberton.h"

char *cap_string(char *s)
{
	int i = 0; 

	while (s[i] !=  '\0')
	{
		while( s[i] == 32 || s[i] == 10 || s[i] == 9)
		{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
		s[i]= s[i] - 32;
		}
		i++;
		}
	}
	return (s);
}
