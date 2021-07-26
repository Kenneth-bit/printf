#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _printf(char *format, ...)
{
	va_list args;
	int res;

	va_start(args, format);
	res = vfprintf(stdout, format, args);
	va_end(args);

	return (res);
}
