#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of listint_t
 *
 * @index:index of the node
 * @head: pointer to the first node
 *
 * Return: pointer to the node at index or NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int i = 0;

	current_node = head;

	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}
	if (i == index)
	{
		return (current_node);
	}
	return (NULL);
}
