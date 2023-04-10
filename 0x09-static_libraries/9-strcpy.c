#include "main.h"

/**
 * _strcpy - This function copies the string pointed to by src to dest
 *
 * @dest: parameter to be checked
 * @src: parameter to be checked
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
