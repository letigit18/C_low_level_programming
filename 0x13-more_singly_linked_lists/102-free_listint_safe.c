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
	listint_t *ptr = *h;

	length = 0;
	if (*h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		ptr = (*h)->next;
		free(*h);
		*h = ptr;
		length++;
	}
	*h = NULL;
	return (length);
}
