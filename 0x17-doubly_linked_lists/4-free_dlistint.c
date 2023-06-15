#include "lists.h"

/**
 * free_dlistint - function that frees the dlistint_t
 * @head: pointer to the head
**/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
