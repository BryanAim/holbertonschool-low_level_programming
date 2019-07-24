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
	int first, second;

	first = atoi(argv[1]);
	second = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!get_op_func(argv[2]) || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(first, second));
	return (0);
}
