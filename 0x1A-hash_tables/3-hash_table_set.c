#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: 1 on success otherwise 0
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
	{
		free(value_copy);
		return (0);
	}
	head->key = strdup(key);
	if (head->key == NULL)
	{
		free(head);
		return (0);
	}
	head->value = value_copy;
	head->next = ht->array[index];
	ht->array[index] = head;

	return (1);
}
