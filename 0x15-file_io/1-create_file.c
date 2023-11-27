#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int index = 0, create_open;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[index] != '\0')
	{
		index++;
	}
	create_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (create_open == -1)
	{
		return (-1);
	}
	write(create_open, text_content, index);
	return (1);
}
