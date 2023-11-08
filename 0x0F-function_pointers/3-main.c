#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry to program
 *
 * @argc: number of arguments
 * @argv: array of strings containing the string
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int num1;
	char *op;
	int num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(op);

	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
