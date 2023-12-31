#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 *
 * @head: pointer to the pointer of the first node
 *
 * Return: data of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;

	n = temp->n;

	*head = (*head)->next;
	free(temp);

	return (n);
}
