#include <stdio.h>

/**
 * print_list - the function that returns no. of nodes
 * @h: the prameter
 * Return: the no of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
