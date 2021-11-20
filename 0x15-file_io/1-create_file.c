#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int opener;

	if (filename == NULL)
		return (-1);

	opener = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

	if (opener == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	write(opener, text_content, strlen(text_content));

	return (1);
}
