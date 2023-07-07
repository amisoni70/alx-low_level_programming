#include "hash_tables.h"

/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, idx = 0;
	hash_node_t *head;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			head = ht->array[i];
			while (head != NULL)
			{
				if (idx > 0)
					printf(", ");
				printf("'%s': '%s'", head->key, head->value);
				head = head->next;
				idx++;
			}
		}
	}
	printf("}\n");
}
