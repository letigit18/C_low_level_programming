#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the first node
 * @head: the head node
 * Return: data if node is not NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (n);
}
