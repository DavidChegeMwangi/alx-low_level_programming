#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers followed by a new line
 *
 * @n: Number of parameters to be passed
 * @separator: Separator between two numbers
 * @...: Variable numbers to be printed
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (x < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
