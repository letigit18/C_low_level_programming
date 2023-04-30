#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - freeup lists
 * @head: the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
