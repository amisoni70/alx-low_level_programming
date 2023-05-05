#include "main.h"

/**
 * flip_bits - This function counts the no. of bits to change
 * to get from one no. to the next
 * @n: first number
 * @m: second number
 * Return: number of bits to change
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int p;
	unsigned long int s = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		p = s >> i;
		if (p & 1)
			count++;
	}
	return (count);
}
