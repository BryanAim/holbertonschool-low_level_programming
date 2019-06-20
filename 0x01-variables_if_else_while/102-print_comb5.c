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
	int z;
	int a;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 0 ; y <= 8 ; y++)
		{
			for (z = 0 ; z <= 9; z++)
			{
				for (a = 1; a <= 9; a++)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(' ');
					putchar(z + '0');
					putchar(a + '0');
					if (!(x == 9 && y == 8 && z == 9 && a == 9))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
