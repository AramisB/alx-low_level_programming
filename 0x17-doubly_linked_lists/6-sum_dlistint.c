#include "lists.h"
/**
 * sum_dlistint - finds the sum of all the nodes in dlistint
 *
 * @head: pointer to the first node
 *
 * Return: the sum of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == 0)
	{
		return (0);
	}
	else
	{
		return (sum_dlistint(head->next) + head->n);
	}
}
