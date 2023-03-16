#include <stdio.h>

/**
 * main - Print out various data types in c
 *
 * Return: Always 0 (Success)
**/

int main(void)
{	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf(char "size of a char:%lu byte(S)\n, (unsigned long)sizeof(a)); 
	printf(int "size of an int:%lu byte(S)\n, (unsigned long)sizeof(b));
	printf(long int "size of long int:%lu byte(S)\n, (unsigned long)sizeof(c));
	printf(long long int "size of long long int:%lu byte(S)\n, (unsigned long)sizeof(d));
	printf(float "size of float:%lu byte(S)\n, (unsigned long)sizeof(e));
	return (0);
} 
