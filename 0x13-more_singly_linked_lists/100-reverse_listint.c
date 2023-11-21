#include "lists.h"
/**
 * reverse_listint - reverses the list in linkint
 *
 * @head: pointer to the pointer to the first node
 *
 * Return: pointer to the first node of the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *temp;
	
	while (curr != NULL)
	{
		temp = curr->next;
		curr->next = prev;

		prev = curr;
		curr = temp;
	}
	*head = prev;
	return (prev);
}

