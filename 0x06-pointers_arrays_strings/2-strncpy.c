#include "main.h"

/**
  * _strncpy - This function copies a string
  *
  * @src: The source of the strings
  * @dest: The destination of the string
  * @n: The length of the integer
  *
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
