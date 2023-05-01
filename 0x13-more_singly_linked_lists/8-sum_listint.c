#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - computes the sum elements
 * @head: the head node
 * Return: the sum result
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
