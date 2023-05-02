#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function that adds a new node in the beginning of list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node
 * Return: pointer to the new node, NULL if it fails
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
