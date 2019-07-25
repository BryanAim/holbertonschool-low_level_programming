#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * main - print name
  * @argc: size
  * @argv: character
  * Return: always 0.
  */
int main(int argc, char *argv[])
{
	int var;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	var = atoi(argv[1]);
	if (var < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
