#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: always 0 (success)
*/
int main(void)
{
	long double f1 = 1, f2 = 1, i;

	for (i = 1; i <= 50; i++)
	{
	printf("%.Lf", f2);

	long double f3 = f1 + f2;

	f1 = f2;
	f2 = f3;
	if (i != 50)
	{
		printf(", ");
	}
	}
	putchar('\n');
	return (0);
}
