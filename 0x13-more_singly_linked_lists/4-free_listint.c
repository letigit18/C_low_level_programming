#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - freeup the memory
 * @head: the head node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
