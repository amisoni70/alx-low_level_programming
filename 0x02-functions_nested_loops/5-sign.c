#include "main.h"
/**
 * print_sign- This is the function that prints the sign of n
 *
 * @n: This is the parameter that is returned by the function
 * Return: 1 if its greater than 0
 * 0 if its equal to 0
 * -1 if its less than 0
**/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

