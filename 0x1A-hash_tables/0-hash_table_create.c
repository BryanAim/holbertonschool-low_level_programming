#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);

	if (hashtable == NULL)
		return (NULL);
	hashtable->array = malloc(sizeof(hash_node_t) * size);

	if (hashtable->array == NULL)
	{
		free(hashtable->array);
		return (NULL);
	}

	for (i = 0; i < size; ++i)
		hashtable->array[i] = NULL;
	return (hashtable);
}

