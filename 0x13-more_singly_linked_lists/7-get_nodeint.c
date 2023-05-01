#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - the function that returns node based on index
 * @head: the head node
 * @index: the given index no.
 * Return: the node at the given index no.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;
	listint_t *ptr = head;

	for (c = 0; c < index; c++)
	{
		ptr = head->next;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
