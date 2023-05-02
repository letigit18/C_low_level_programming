#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t calculate_length(const listint_t *head);

/**
 * calculate_length - computes the length of the node
 * @head: the head node param
 * Return: the length of the node
 */
size_t calculate_length(const listint_t *head)
{
	size_t count;

	count = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
/**
 * print_listint_safe - prints the list
 * @head: the head node pointer
 * Return: the length of the node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length;
	size_t i;

	i = 0;
	length = calculate_length(head);
	while (i < length)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	return (length);
}
