#include "holberton.h"

/**
  * numb - value of a root
  * @n: number
  * @i: root
  * Return: root number
  */

void rev(char *s)
{
	if (*s != '\0')
	{
		s++;
		rev(s);
		s--;
		_putchar(*s);
	}
}

/**
  * is_prime_number - prime number
  * @n: number
  * Return: prime number
  **/

int is_palindrome(char *s)
{
	char *x = rev(s);

	if (x == s)
	{
	return (1);
	}
	return (0);
}
