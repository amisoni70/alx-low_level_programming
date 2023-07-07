#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of an array/ hash table
 * Return: pointer to the newly created hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head = NULL;

	if (size == 0)
		return (NULL);
	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);
	head->size = size;
	head->array = malloc(sizeof(hash_node_t *) * size);
	if (head->array == NULL)
		return (NULL);
	return (head);
}
