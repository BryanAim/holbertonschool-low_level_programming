#include "lists.h"

/**
 * pop_listint - deletes the head.
 * @head: pointer to structure
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int length = 0;

	if (*head == NULL)
		return (0);
	if ((*head)->next == NULL)
	{
		length = (*head)->n;
		free(*head);
		return (length);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		length = temp->n;
		free(temp);
	}
	return (length);
}
