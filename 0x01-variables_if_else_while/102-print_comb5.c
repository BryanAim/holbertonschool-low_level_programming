#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int y;
	int a;
	int b;
	int z;

	for (x = '0' ; x <= '9' ; x++)
	{
		for (y = '0' ; y <= '9' ; y++)
		{
			for (a = x ; a <= '9'; a++)
			{
				if (a == x)
				{
					z = y + 1;
				}
				else
				{
					z = '0';
				}
				for (b = z; b <= '9'; b++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(a);
					putchar(b);
					if (!(x == '9' && y == '8' && a == '9' && b == '9'))
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
