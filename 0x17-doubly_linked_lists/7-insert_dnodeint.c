#include "lists.h"
/**
 * insert_dnodeint_ata_index - adds a not at a given index
 *
 * @h: pointer to the pointer to the first node
 * @idx: index where the node should be added
 * @n: data to be added
 *
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if(h == NULL)
	{
		return (NULL);
	}


	new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	temp = *h;
	
	while (temp != NULL && count < idx -1)
	{
		temp = temp->next;
		count++;
	}
	
	if (temp == NULL && idx > count)
	{
		free(new_node);
		return(NULL);
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = new_node;
	}
	temp->next = new_node;
	return (new_node);
}
