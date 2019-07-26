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
	unsigned int i;

	va_start(arg, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
		if (i < n - 1)
			printf("%d%s", va_arg(arg, unsigned int), separator);
		else
			printf("%d\n", va_arg(arg, unsigned int));
		}
	}
	va_end(arg);
}
