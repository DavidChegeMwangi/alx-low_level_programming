#include "main.h"

/**
 * _strlen_recursion - This function prints the length of a string
 *
 * @s: String parameter to be printed
 *
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * palindrome_checker - This function checks if s is palindrome
 *
 * @s: string base address
 * @i: left index
 * @j: right index
 *
 * Return: 1 if s is palindrome, otherwise 0
 */

int palindrome_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (palindrome_checker(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - This function checks if s is palindrome
 *
 * @s: base address for string
 *
 * Return: 1 if n is prime, otherwise 0
 */

int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, _strlen_recursion(s) - 1));
}
