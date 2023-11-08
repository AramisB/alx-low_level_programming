#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: contains integers
 * @cmp: pointer to the fuction to be used to compare values
 * @size: number of integers in array
 * Return: the indext of the first element
 * for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
