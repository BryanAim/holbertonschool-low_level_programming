#include "hash_tables.h"
hash_node_t *add_hash_table(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (*head != NULL)
		newnode->next = NULL;
	if (*head == NULL)
		newnode->next = NULL;
	*head = newnode;
	return (newnode);
}
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *aux = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	if (aux != NULL)
	{
		new = add_hash_table(&(ht->array[index]), key, value);
		if (new == NULL)
			return(0);
	}
	else
	{
		new = add_hash_table(&(ht->array[index]), key, value);
		if (new == NULL)
			return(0);
	}
	return (1);
}
