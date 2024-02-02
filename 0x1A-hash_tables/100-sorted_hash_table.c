#include "hash_tables.h"
/**
 * shash_table_create - a function that creates a sorted hash table
 *
 * @size: size of the table
 *
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = (shash_table_t *)malloc(sizeof(shash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);

	if (table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

/**
 * shash_table_set - a function that adds an element to a sorted hash table
 * @ht: pointer to the sortef hashtable
 * @key: pointer to the key, cannot be empty
 * @value: pointer to the value associated with the key
 * Return: 1 if succeeded, 0 otherwiswe
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_cp;
	shash_node_t *new_node, *current, *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_cp = strdup(value);

	if (value_cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;
	temp = NULL;

	while (current && strcmp(current->key, key) < 0)
	{
		temp = current;
		current = current->snext;
	}
	if (current && strcmp(current->key, key) == 0)
	{
		free(value_cp);
		current->value = value_cp;
		return (1);
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_cp);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_cp);
		free(new_node);
		return (0);
	}
	new_node->value = value_cp;

	if (temp == NULL)
	{
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		new_node->snext = temp->snext;
		temp->snext = new_node;
	}

	if (new_node->snext == NULL)
	{
		ht->stail = new_node;
	}

	ht->array[index] = new_node;
	
	return (1);
}

/**
 * shash_table_get - a function that retrieves the value of the associated key
 * @ht: pointer to the sortef hash table
 * @key: key
 * Return: associated key value or NULL if key couldn't be found
 *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return NULL;

	index = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	current = ht->shead;
	if (current != NULL)
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				return (current->value);
			}
			current = current->next;
		}
	}
	return (NULL);
}
/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to the sorted hash table
 * if NULL, print nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;

	printf("{");

	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverswe
 *
 * @ht: pointer the sorted hash table
 * if NULL, print nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: A pointer to the sorted hash table.
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	while (node != NULL)
	{
		temp = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(head->array);
	free(head);
}
