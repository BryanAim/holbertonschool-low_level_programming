#include "holberton.h"
#include <stdio.h>

/**
  * main - number of arguments
  * @argc: size
  * @argv: character
  * Return: always 0.
  */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);
}
