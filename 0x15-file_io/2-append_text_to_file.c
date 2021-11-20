#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append
 * @text_content: the text to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, opener, writer;

	if (filename == NULL)
		return (-1);

	opener = open(filename, O_WRONLY | O_APPEND);

	if (opener == -1)
		return (-1);

	if (text_content)
	{
		x = strlen(text_content);
		writer = write(opener, text_content, x);
		if (writer == -1)
			return (-1);
	}
	return (1);
}
