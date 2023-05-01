#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to the given index
 * @head: the head node
 * @idx: the index number
 * @n: the data parameter
 * Return: the new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *ptr = *head;
	unsigned int pos;

	pos = 0;
	new_node->n = n;
	if (*head == NULL || !new_node)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (ptr && pos < idx)
	{
		if (pos == idx - 1)
		{
		new_node->next = ptr->next;
		ptr->next = new_node;
		return (new_node);
		}
		else
		{
			ptr = ptr->next;
		}
		pos++;
	}
	return (NULL);
}
