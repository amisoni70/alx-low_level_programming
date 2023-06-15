#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint _t list
 * @h: the head of the list
 * Return: No. of nodes in the list
**/

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
