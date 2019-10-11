#include "hash_tables.h"
/**
 * add_hash - adds a new node for the hash
 * @head: pointer to the nodes
 * @key: the key, can not be an empty string
 * @value: value associated with the key
 *
 * Return: new pointer to node
 */
hash_node_t *add_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newnode;

	if (head == NULL)
	{
		newnode = malloc(sizeof(hash_node_t));
		if (newnode == NULL)
		{
			free(newnode);
			return (0);
		}
		newnode->key = strdup(key);
		newnode->value = strdup(value);
		*head = newnode;
	}
	else
	{
		newnode = malloc(sizeof(hash_node_t));
		if (newnode == NULL)
		{
			free(newnode);
			return (0);
		}
		newnode->key = strdup(key);
		newnode->value = strdup(value);
		newnode->next = (*head);
		*head = newnode;
	}

	return (newnode);
}
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer to a hash table
 * @key: the key, can not be an empty string
 * @value: value associated with the key
 *
 * Return: 1 if it succeded, 0 otherwise
 */
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
		new = add_hash(&(ht->array[index]), key, value);
		if (new == NULL)
		{
			return (0);
		}
	}
	else
	{
		new = add_hash(&(ht->array[index]), key, value);
		if (new == NULL)
		{
			return (0);
		}
	}
	return (1);
}
