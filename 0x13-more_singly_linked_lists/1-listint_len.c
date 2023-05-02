#include "lists.h"

/**
 * listint_len - function that returns the no. of the list
 * @h: pointer to the linked list
 * Return: The number of nodes
**/

size_t listint_len(const listint_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
