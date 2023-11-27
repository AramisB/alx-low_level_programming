#include "main.h"
/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - Copies contents of one file to another.
 *
 * @argc: Number of arguments.
 * @argv: String argument.
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
    int file_from, file_to;
    int number1, number2;
    char buff[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    file_from = open(argv[1], O_RDONLY);
    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
    error_file(file_from, file_to, argv);
    number1 = 1024;
    
    while (number1 == 1024)
    {
	    number1 = read(file_from, buff, number1);
	    if (number1 == -1)
	    {
		    error_file(-1, 0, argv);
	    }
	    number2 = write(file_to, buff, number1);
	    if (number2 == -1)
	    {
		    error_file(0, -1, argv);
	    }
    }
    if (close(file_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit(100);
    }

    if (close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit(100);
    }

    return (0);
}
