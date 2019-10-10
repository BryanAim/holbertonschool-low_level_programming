#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->key = strup(key);
	newnode->value = strup(value);
	if (*ht != NULL)
		newnode->next = NULL;
	if (*ht == NULL)
		newnode->next = NULL;
	*ht = newnode;
	return (*ht);
}
