#include "main.h"

/**
 * create_file - Create file.
 * @filename: Pointer to the file name to create.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: If function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int name, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	name = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, len);

	if (name == -1 || x == -1)
		return (-1);

	close(name);

	return (1);
}


