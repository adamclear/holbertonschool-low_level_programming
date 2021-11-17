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
	char *buffer = malloc(sizeof(char) * letters);

	/* check for valid arg for file and successful malloc */
	if (!filename || !buffer)
		return (0);
	/* check for if file can be opened */
	if ((openit = open(filename, O_RDONLY)) == -1)
		return (0);
	/* check for if file can be read */
	if ((readit = read(openit, buffer, letters)) == -1)
		return (0);
	/* write to stdout, close file, free buffer */
	writeit = write(STDOUT_FILENO, buffer, readit);
	close(openit);
	free(buffer);
return (writeit);
}
