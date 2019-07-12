#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - minimum number coins to make change
  * @argc: size
  * @argv: character
  * Return: always 0.
  */


int main(int argc, char *argv[])
{
	int coin[5] = {25, 10, 5, 2, 1};
	int x, i, change = 0;

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0");
	}
	for (i = 0; i < 5; i++)
	{
		if (x >= coin[i])
		{
		x = x - coin[i];
		change = change + 1;
		if (x >= coin[i])
		{
			i--;
		}
		if (x == 0)
			{
			break;
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
