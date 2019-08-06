#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to structure
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int count;

	if (head == NULL)
		return (-1);
	if (*head)
	{
	temp = *head;
	temp2 = (*head)->next;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		for (count = 1; count < index; count++)
		{
			temp = temp->next;
			temp2 = temp->next;
		}
		temp->next = temp2->next;
		free(temp2);
		}
	return (1);
	}
	else
		return (-1);
}
