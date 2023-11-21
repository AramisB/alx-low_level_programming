#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: String to be printed between strings.
 * @n: Number of strings to be passed to the function.
 * @...: A variable number of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && index != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(strings);
}