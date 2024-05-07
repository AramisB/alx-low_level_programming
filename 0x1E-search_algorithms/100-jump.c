#include <stdio.h>
#include <math.h>

/**
 * jump_search - a function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:the value to search for
 * Return: the first index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t jump = sqrt(size);
	size_t current = 0, prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (current <= size - 1 && array[current] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", current, array[current]);
		current += jump;
	}

	prev = current - jump;
	printf("Value found between indexes [%ld] and [%ld]\n", prev, current);
	for (i = prev; i <= current + jump && i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
