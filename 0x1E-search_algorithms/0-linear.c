#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of int.
 * @array: pointer to the first element of array
 * @size: no. of elements in the array
 * @value: value of the array to search for
 * Return: The value that matches otherwise -1
**/

int linear_search(int *array, size_t size, int value)
{
	int k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < (int)size; k++)
	{
		printf("Value checked array[%u] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
}
