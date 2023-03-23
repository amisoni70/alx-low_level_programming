#include "main.h"

/**
 * print_diagonal- prints a diagonal line
 * @n: prints int
 * Return: always 0
**/

void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (k = 0 ; k < n ; k++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
