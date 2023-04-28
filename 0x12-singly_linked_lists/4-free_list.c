#include <stdlib.h>
#include "lists.h"

/**
 * free_list - the function that releases linked list
 * @head: the linked list param
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

