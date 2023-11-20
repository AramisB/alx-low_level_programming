#include "lists.h"
/**
 * sum_listint - a fuction that adds all the elements of listint
 *
 * @head: pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sum = 0;

	current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
