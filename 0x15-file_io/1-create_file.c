#include "main.h"

/**
 * create_file - Function Creates a file.
 * @filename: is the name of the file to create 
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 *         
 */
int create_file(const char *filename, char *text_content)
{
	int fileD, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fileD = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fileD, text_content, len);

	if (fileD == -1 || x == -1)
		return (-1);

	close(fileD);

	return (1);
}


