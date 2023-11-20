#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of listint
 *
 * @head: pointer to the first node
 * @n: integer value of the new node
 *
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *temp;

	end_node = (listint_t *)malloc(sizeof(listint_t));

	if (end_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end_node;

	return (end_node);
}
