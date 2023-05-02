#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees the listint_t
 * @head: listint_t to be freed
**/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
