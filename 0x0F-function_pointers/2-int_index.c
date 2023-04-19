#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of elements in the array
 * @cmp: pointer to the function
 * Return: the size of the array else -1
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (k = 0 ; k < size ; k++)
	{
		if (cmp(array[k]))
			return (k);

	}
	return (-1);

}
