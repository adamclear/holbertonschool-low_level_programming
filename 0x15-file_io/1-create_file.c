#include "main.h"
/**
 * create_file - creates a file and writes the indicated string to it
 * @filename: name of the file to be created
 * @text_content: the string to be written to the created file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int openit;

	/* check for filename and if file can be opened/created */
	if (!filename)
		return (-1);
	openit = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (openit == -1)
		return (-1);
	/* if there is text content, write it to the file */
	if (!text_content)
		text_content = "";
	write(openit, text_content, strlen(text_content));
return (1);
}
