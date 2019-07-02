#include "holberton.h"

int _strlen(char *ss)
{
	int tam = 0;

	while (*ss != '\0')
	{
		tam++;
		ss++;
	}
	return (tam);
}
