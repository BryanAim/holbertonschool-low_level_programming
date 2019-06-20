#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 8 ; x++)
	{
		for (y = 1 ; y <= 9 ; y++)
		{
			if (x < y)
			{
			putchar(x + '0');
			putchar(y + '0');
			if (!(x == 8 && y == 9))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
