#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints the name
 * @name: string to be printed
 * @f: pointer to the function
 * Return: always 0
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);

}
