#include "function_pointers.h"

/**
 * array_iterator - this function executes the function given
 * as a parameter on each element of an array
 *
 * array: to execute func on
 * @size: the size of the array
 * @action: pointer to the function you ned to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)


		return;


	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
