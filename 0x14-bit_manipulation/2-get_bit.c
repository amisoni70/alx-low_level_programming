#include "main.h"

/**
 * get_bit - returns the value of bit at index
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
**/

int get_bit(unsigned long int n, unsigned int index)
{
	int p;

	if (index > 63)
		return (-1);

	p = (n >> index) & 1;

	return (p);
}
