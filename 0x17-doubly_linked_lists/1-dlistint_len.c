#include "lists.h"

/**
 * dlistint_len - function returns number of elements in dlistint_t list
 * @h: the head pointer to the dlistint_t to be printed
 * Return: number of nodes in the list
**/

size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
