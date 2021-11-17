#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: pointer to the file to be read
 * @letters: the number of characters to be printed
 * Return: buffer of the characters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openit, readit, writeit;
	char *buffer;

	openit = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);

	if (openit == -1 || !filename || !buffer)
	{
		return (0);
	}

	readit = read(openit, buffer, letters);
	writeit = write(STDOUT_FILENO, buffer, readit);
	close(openit);
	free(buffer);

return (writeit);
}
