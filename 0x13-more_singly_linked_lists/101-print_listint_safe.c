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
	listint_t temp;
	listint_t temp2;
	size_t count;

	count = 1;
	if (head == NULL)
	{
		return (0);
	}
	temp = head->next;
	temp2 = (head->next)->next;
	while (temp2)
	{
		if (temp == temp2)
		{
			temp = head;
			while (temp != temp2)
			{
				length++;
				temp = temp->next;
				temp2 = temp2->next;
			}
			temp = temp->next;
			while (temp != temp2)
			{
				length++;
				temp = temp->next;
			}
			return (length);
		}
		temp = temp->next;
		temp2 = (temp2->next)->next;

	}
	return (0);
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
	if (length == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			length++;
		}
	}
	else
	{
	while (i < length)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (length);
}
