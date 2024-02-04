#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of array
 * Return: Pointer to new hash table or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int j;

	if (size == 0)
		return (NULL);
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	for (j = 0; j < size; j++)
	{
		hash_table->array[j] = NULL;
	}
	return (hash_table);
}
