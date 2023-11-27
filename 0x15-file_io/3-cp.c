#include "main.h"

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
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
		    S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
        exit(99);
    }

    do
    {
        number1 = read(file_from, buff, sizeof(buff));
        if (number1 == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            exit(98);
        }

        number2 = write(file_to, buff, number1);
        if (number2 < number1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    } while (number1 > 0);

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
