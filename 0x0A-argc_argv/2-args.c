#include <stdlib.h>
#include <stdio.h>
/**
 * main - enttry point
 *
 * @argc: argument count
 * @argv: arrays
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
