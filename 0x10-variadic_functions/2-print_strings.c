#include "variadic_functions.h"

/**
 * print_strings - This functionn prints strings
 * passed to the function separed by separators
 *
 * @separator: String to be printed to separate strings
 * @n: Number of unnamed parameters
 * @...: Variable number of strings to be printed
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int x;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
