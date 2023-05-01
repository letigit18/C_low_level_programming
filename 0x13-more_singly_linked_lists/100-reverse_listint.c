#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: the head node
 * Return: the address of the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *forw = NULL;

	while (*head != NULL)
	{
		forw = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forw;
	}
	*head = back;
	return (*head);
}
