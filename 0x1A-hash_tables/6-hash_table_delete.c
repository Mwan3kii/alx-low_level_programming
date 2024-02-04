#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - deletes hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *curr, *tmp;

	if (ht == NULL)
		return;
	for (n = 0; n < ht->size; n++)
	{
		curr = ht->array[n];
		while (curr != NULL)
		{
			tmp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
