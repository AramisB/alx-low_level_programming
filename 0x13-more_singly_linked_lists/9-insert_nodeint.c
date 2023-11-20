#include "lists.h"
/**
 * insert_nodeint_at_index - a fuction that inserts a new node at idx
 *
 * @head: pointer to the pointer to the first node
 * @idx: index where the new node is to be inserted
 * @n: value of the new node
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node;
	unsigned int i;
	listint_t *new_node;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	for (i = 0; i < (idx - 1) && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
