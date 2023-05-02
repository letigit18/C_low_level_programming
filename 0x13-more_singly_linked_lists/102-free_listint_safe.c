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
	size_t count;
	listint_t *ptr = *h;
	int x;

	count = 0;
	if (*h == NULL)
	{
		return (0);
	}
	for (; *h != NULL;)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
		ptr = (*h)->next;
		free(*h);
		*h = ptr;
		count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
