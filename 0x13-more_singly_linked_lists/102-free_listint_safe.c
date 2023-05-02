#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees up the list
 * @h: the head node address
 * Return: the length of the deleted node
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length;
	listint_t *ptr = *head;

	if (*head == NULL)
	{
		return (0);
	}
	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		length++;
	}
	*head = NULL;
	return (length);
}
