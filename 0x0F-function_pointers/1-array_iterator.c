#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that prints each element
 * @array: array of elements
 * @size: how many elements to print
 * @action: pointer to print elements in reg or hex
 * Return: always 0
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0 ; k < size ; k++)
	{
		action(array[k]);
	}
}
