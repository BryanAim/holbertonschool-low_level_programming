#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct format
{
	char *format;
	int (*f)(int a, int b);
} print;

int _putchar(char c);
int _printf(const char *format, ...);

#endif;
