#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves the value of the associated key
 * @ht: pointer to the hash table
 * @key: key
 * Return: associated key value or NULL if key couldn't be found
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
			current = current->next;
	}
	return (NULL);
}
