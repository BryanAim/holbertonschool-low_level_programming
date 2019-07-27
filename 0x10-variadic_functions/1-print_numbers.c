#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_numbers - print numbers
  * @n: number of arguments
  * @separator: string between numbeers
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, var;

	va_start(arg, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			var = va_arg(arg, unsigned int);

		if (i < n - 1 && separator)
			printf("%d%s", var, separator);
		else
			printf("%d\n", var);
		}
	}
	va_end(arg);
}
