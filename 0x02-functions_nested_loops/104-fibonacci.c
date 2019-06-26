#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
*Return: always 0 (success)
*/
int main(void)
{
	long double f1 = 0, f2 = 1, i;

	for (i = 1; i <= 50; i++)
	{
	printf("%.Lf", f2);

	long double next = f1 + f2;

	f1 = f2;
	f2 = next;
	printf(", ");
	}
	putchar('\n');
	return (0);
}
