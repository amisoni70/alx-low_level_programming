#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all elements in a linked list
 * @h: pointer to the list to be printed
 * Return: The number of nodes
**/

size_t print_listint(const listint_t *h)
{
	size_t p = 0;

	while (h)
	{
		printf("%d\n", h->n);
			p++;
			h = h->next;
	}
	return (p);
}
