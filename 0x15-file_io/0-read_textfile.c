#include "main.h"
/**
 * read_textfile - reads a textfile an prints it to POSIX std output
 *
 * @letters: number of letters to read and print
 * @filename: a pointer to the file
 *
 * Return: 0 if filenme cannot be opened, if filename is NULL
 * and if write fails
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, bytesRead, bytesWritten;
	char *bufferPoem;

	bufferPoem = malloc(letters);

	if (bufferPoem == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(bufferPoem);
		return (0);
	}

	bytesRead = read(file, bufferPoem, letters);
	bytesWritten = write(STDOUT_FILENO, bufferPoem, bytesRead);

	close(file);
	return (bytesWritten);
}
