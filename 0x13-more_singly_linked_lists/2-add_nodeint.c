#include <stdio.h>
#include <stdlib.h>
#include <lists.h>

/**
 * add_nodeint - add node to the first
 * @head: the head node
 * @n: the data prameter
 * Return: the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	new_node->next = *head;
	return (new_node);
}



