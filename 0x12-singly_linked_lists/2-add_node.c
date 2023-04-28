#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - the function that add node
 * @head: the first parameter
 * @str: stringn passed to the function
 * Return: the address of head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	unsigned int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	current = malloc(sizeof(list_t));
	if (current == NULL)
	{
		return (NULL);
	}
	current->str = strdup(str);
	current->len = length;
	current->next = (*head);
	(*head) = current;
	return (*head);
}


