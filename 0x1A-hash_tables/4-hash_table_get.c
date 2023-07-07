#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with the key
 * @ht: a pointer to the hash table
 * @key: The element to get the value from
 * Return: NULL if key can't be matched
 * otherwise value associated with the key
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index]; /*points to 1st index in the array*/
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
