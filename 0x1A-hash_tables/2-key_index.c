#include "hash_tables.h"
/**
 * key_index - a function that returns a key index
 *
 * @key: the key
 * @size: size of the array of the hash table
 * Return: the key index
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
