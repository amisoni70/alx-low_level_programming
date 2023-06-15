#include "lists.h"

/**
 * sum_dlistint - function that returns sum of the data n
 * @head: pointer to the list
 * Return: sum of all data n stored in the elements
**/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
