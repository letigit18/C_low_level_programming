#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - the function that add a node to end
 * @n: data parameter
 * @head: the node parameter
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));

	listint_t *ptr = *head;
	end_node->next = NULL;
	end_node->n = n;
	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	while (ptr != NULL)
	{
		ptr  = ptr->next;
	}
	ptr->next = end_node;
	return (end_node);
}


