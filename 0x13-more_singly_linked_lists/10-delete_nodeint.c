#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specific index in listint_t.
 *
 * @head: Pointer to the pointer to the first node.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
	{
		return (-1);
	}
	temp = current_node->next;
	current_node->next = temp->next;
	free(temp);

	return (1);
}
