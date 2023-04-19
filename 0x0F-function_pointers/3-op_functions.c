#include "3-calc.h"

/**
 * op_add - function that adds two integers together
 * @a: integer 1
 * @b: integer 2
 * Return: sum of a and b
**/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - function that returns difference of 2 numbers
 * @a: integer 1
 * @b: integer 2
 * Return: difference of a and b
**/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of 2 numbers
 * @a: integer 1
 * @b: integer 2
 * Return: product of a and b
**/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division of 2 numbers
 * @a: integer 1
 * @b: integer 2
 * Return: division of a and b
**/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of 2 numbers
 * @a: integer 1
 * @b: integer 2
 * Return: the remainder of a and b
**/

int op_mod(int a, int b)
{
	return (a % b);
}
