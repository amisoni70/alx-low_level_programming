#include <stdio.h>

/**
 * main - function that prints the number of arguements passed to it
 * @argc: function parameter
 * @argv: function parameter
 * Return: 0
**/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc -1);
	return (0);
}
