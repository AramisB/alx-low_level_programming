#include "lists.h"
/**
 * free_listint2 - sets head to NULL and frees listint
 * @head: pointer to the pointer to the first node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
