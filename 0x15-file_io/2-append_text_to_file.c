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
	int x = strlen(text_content);

	openit = open(filename, O_WRONLY | O_APPEND);

	if (openit == -1 || !filename)
	{
		return (-1);
	}
	if (text_content)
	{
		writeit = write(openit, text_content, x);
	}
	if (writeit == -1)
	{
		return (-1);
	}
return (1);
}
