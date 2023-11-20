#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of listint
 *
 * @head: pointer to the first node
 * @n: integer value of the new node
 *
 * Return: address of the new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;


	return (newNode);
}
