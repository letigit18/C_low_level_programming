#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the element
 * @h: the node parameter
 * Return: the length of node
 */
size_t print_listint(const listint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		length++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (length);
}
