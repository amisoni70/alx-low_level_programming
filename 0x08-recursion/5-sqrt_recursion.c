#include "main.h"

/**
 * _sqrt_recursion - Returns natural square root of a number
 * sqrt_abc - recurses to find the square root of a number
 * @n: integer
 * Return: Natural square root of the number
**/

int _sqrt_recursion(int n)
{
	int sqrt_abc(int n, int sq);

	int sq = 1;

	return (sqrt_abc(n, sq));
}

int sqrt_abc(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_abc(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
