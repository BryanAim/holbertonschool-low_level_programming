#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;

	for (az = '0' ; az <= '9' ; az++)
	putchar(az);

	for (az = 'a' ; az <= 'f' ; az++)
	putchar(az);

	putchar('\n');
	return (0);
}
