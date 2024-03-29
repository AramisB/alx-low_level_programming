#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to a hash table
 * @ht: pointer to the hashtable
 * @key: pointer to the key, cannot be empty
 * @value: pointer to the value associated with the key
 * Return: 1 if succeeded, 0 otherwiswe
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_cp;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_cp = strdup(value);

	if (value_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = value_cp;
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_cp);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_cp;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
