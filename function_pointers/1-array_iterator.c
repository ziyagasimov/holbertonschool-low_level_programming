#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array of integers
 * @size: the size of the array
 * @action: function pointer to apply to each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
