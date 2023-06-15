#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of the list
 * @head: pointer to the list
 * @index: the node to locate
 * Return: the address of the located node, NULL if it dosen't exist
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
