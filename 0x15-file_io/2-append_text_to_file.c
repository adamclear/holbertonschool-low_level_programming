#include "main.h"
/**
 * append_text_to_file - appends the indicated string to the indicated file
 * @filename: file to be appended
 * @text_content: string to append to file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openit, writeit;
	int x;

	/* check if filename exists and if it can be opened */
	if (!filename)
		return (-1);
	openit = open(filename, O_WRONLY | O_APPEND);
	if (openit == -1)
		return (-1);
	/* if there is text content find the length and check for write */
	if (text_content)
	{
		x = strlen(text_content);
		if ((writeit = write(openit, text_content, x)) = -1)
			return (-1);
	}
return (1);
}
