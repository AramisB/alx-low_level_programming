#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: arrays
 *
 * Return: Always 0(success)
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);

	mul = i * j;
	printf("%d\n", mul);

	return (0);
}
