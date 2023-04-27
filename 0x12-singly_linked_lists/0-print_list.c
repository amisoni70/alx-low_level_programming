#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all elements in the linked list
 * @h: pointer to the list_t list to be printed
 * Return: the number of nodes
**/

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
				h = h->next;
				s++;
	}
	return (s);
}
