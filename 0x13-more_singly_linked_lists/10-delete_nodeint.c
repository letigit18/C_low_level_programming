#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given index
 * @head: the head node address
 * @index: the index no param
 * Return: 1 if success or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos;
	listint_t *ptr = *head;
	listint_t cur = NULL;

	pos = 1;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (pos < index)
	{
		ptr = ptr->next;
		pos++;
	}
	cur = ptr->next;
	ptr->next = cur->next;
	free(cur);
	return (1);
}
