#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size 'size' and assigns the character 'c'
 * @size: size of the array
 * @c: character to assign
 *
 * Description: Creates an array of size 'size' and assigns char c
 * Return: Pointer to the array, NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
