#include "main.h"

/**
 * _atoi - This function convert a string to an integer
 *
 * @s: The pointer to convert
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int n = 0;
	int min = 1;
	int ss = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			ss = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}

		if (ss == 1)
		{
			break;
		}

		c++;
	}

	n *= min;
	return (n);
}
