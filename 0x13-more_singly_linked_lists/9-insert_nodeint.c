#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: pointer to structure
 * @idx: index of the node
 * @n: data
 * Return: the nth node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	temp = *head;
	for (count = 1; count < idx; count++)
		temp = temp->next;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
