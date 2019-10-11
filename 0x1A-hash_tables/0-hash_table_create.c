#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the table
 *
 * Return: a pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i;

	if (size < 1)
		return (NULL);
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	hashtable->size = size;
	return (hashtable);
}
