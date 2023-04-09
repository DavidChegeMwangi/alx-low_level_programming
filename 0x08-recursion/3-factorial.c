#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 *
 * @n: number parameter to be returned
 *
 * Return: The factorial of n
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
