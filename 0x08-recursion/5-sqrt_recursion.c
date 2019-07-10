#include "holberton.h"

/**
  * _sqrt_recursion - natural square root of a number
  * @n: number
  * Return: square root
  */

int _sqrt_recursion(int n)
{
	int sqr = n / 2;
	if (sqr != 0)
	
		return (n / sqr + sqr);

}
