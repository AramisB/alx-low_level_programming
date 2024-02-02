#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 * if NULL, print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned char sep_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (sep_flag == 1)
			{
				printf(", ");
			}
			node = ht->array[index];

			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
				{
					printf(", ");
				}
			}
			sep_flag = 1;
		}
	}
	printf("}\n");
}
