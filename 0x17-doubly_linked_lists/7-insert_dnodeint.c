#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to structure
 * @idx: index of the node
 * @n: data
 * Return: addres of the new node at index, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int count = 0;

	if (*h == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	else
	{
	temp = *h;
	while (temp != NULL)
	{
		if (count == (idx - 1))
		{
			newnode->next = temp->next;
			newnode->prev = temp->prev;
			temp->next = newnode;
			return (newnode);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
	}

}
