#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - the function that adds node to the end
 * @head: the first parameter
 * @str: the second parameter
 * Return: the address of the last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	usigned int length;

	list_t *temp = *head;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	last_node = malloc(sizeof(list_t));

	if (last_node == NULL)
	{
		return (NULL);
	}
	last_node->str = strdup(str);
	last_node->len = length;
	last_node->next = NULL;
	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = last_node;
	return (last_node);
}
