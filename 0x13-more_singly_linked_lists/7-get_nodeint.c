#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the head of the linked list
 * @index: index of the node to search for
 * Return: the pointer to the desired node, or NULL otherwise
**/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t p;

	for (p = 0; (p < index) && (head->next); p++)
		head = head->next;
	if (p < index)
		return (NULL);
	return (head);
}
