#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cb;

	for (cb = 0 ; cb <= 9 ; cb++)
	{
	putchar(cb + '0');

	if (cb != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
