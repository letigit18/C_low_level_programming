#include <stdio.h>
#include "lists_h"
/**
 * print_list - the function that returns no. of nodes
 * @h: the prameter
 * Return: the no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i]%s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
