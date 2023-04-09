#include "main.h"

/**
 * _prime_actual - this function calculates if the number
 * is prime using the concept of recursion
 *
 * @n: parameter to evaluate
 * @x: iterator
 *
 * Return: 1 if n is a prime number, otherwise 0
 */

int _prime_actual(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	else if (n % x == 0 && x > 0)
	{
		return (0);
	}
	else
	{
		return (_prime_actual(n, x - 1));
	}
}

/**
 * is_prime_number - This function determines
 * if an input intager is prime or not
 *
 * @n: parameter to evaluate
 *
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_prime_actual(n, n - 1));
	}
}

