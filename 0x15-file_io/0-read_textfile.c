#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * POSIX STDOUT
 * @filename: the file we are looking for
 * @letters: the text in the file
 * Return: text to STDOUT, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opener, reader, writer;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || buffer == NULL)
		return (0);

	opener = open(filename, O_RDONLY);
	if (opener == -1)
		return (0);

	reader = read(opener, buffer, letters);
	if (reader == -1)
		return (0);

	writer = write(STDOUT_FILENO, buffer, reader);

	close(opener);
	free(buffer);
	return (writer);
}
