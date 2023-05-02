#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: pointer to the head of the linked list
 * Return: sum of all the data, or 0 if list is empty
**/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
