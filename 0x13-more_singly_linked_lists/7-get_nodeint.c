#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the index of the node 
 * @head: the head node
 * @index: parameter
 * Return: the node at the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int c;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
	while (head != NULL && c < index)
	{
		head = head->next;
		c++;
	}
	return (head);
	}
}
