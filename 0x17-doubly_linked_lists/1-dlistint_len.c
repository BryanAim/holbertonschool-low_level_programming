#include "lists.h"
/**
 *dlistint_len - number of elements in list
 *@h: pointer to list
 *Return: length.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
