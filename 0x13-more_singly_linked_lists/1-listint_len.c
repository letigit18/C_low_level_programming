#include <stdio.h>
#include "main.h"

/**
 * listint_len - computes length of elements
 * @h: node parameter
 * Return: lenght of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return length;
}
