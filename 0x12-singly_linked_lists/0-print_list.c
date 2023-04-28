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
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	printf("%s\n", h->str);
	printf("%i\n", h->len);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return count;
}
