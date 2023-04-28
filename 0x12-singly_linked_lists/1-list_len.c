#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns no. of element
 * @h: the head node
 * Return: the no. of element
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
