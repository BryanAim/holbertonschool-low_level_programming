#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_strings - print strings
  * @n: number of arguments
  * @separator: string between numbeers
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
		char *var = va_arg(arg, unsigned int);

		if (arg == NULL)
			printf("nil");
		if (i < n - 1)
			printf("%s%s", var, separator);
		else
			printf("%s\n", var);
		}
	}
	va_end(arg);
}
