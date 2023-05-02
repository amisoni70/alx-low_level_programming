#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node from the linked list
 * @head: pointer to the first element in the linked list
 * Return: the data in the deleted node
**/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int p;

	if (!head || !*head)
		return (0);

	p = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (p);
}
