#include "lists.h"

/**
 * listint_len - a function that prints number of elements in listint
 *
 * @h: pointer to the first node
 *
 * Return: number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
