#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: a NULL terminated string to be appended
 *
 * Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int index = 0, append_file;

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
	append_file = open(filename, O_WRONLY | O_APPEND);

	if (append_file == -1)
	{
		return (-1);
	}
	write(append_file, text_content, index);
	return (1);
}
