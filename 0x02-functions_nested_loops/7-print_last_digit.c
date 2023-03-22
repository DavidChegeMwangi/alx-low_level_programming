#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @i: function parameter
 *
 * Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = 1 % 10;
	if (i < 0)
		k = -k;
	return (k);
}
