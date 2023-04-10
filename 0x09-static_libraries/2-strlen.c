#include "main.h"

/**
  *_strlen - This function returns the length of a string
  *
  *@s: string parameter
  *
  *Return: length
  */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
