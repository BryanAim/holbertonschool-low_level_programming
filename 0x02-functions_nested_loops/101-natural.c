#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: always 0 (success)
  */

int main(void)
{
	int a;
	int x;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			x = x + a;
	}
	printf("%d\n", x);
	return (0);
}
