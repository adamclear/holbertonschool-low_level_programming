#include "main.h"
/**
 * main - creates a new file and copies the contents of indicated file to it
 * @argc: number of arguments
 * @argv: array of arguments, must be a file to cp from and file to cp to
 * Return: 0 on success, 97-100 on failures
 */
int main(int argc, char *argv[])
{
	int openfrom, opento, writeit;
	char buffer[1024];

	/* check for proper # of args */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	/* check for files can be opened */
	if ((openfrom = open(argv[1], O_RDONLY)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	if ((opento = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
		exit(99);
	/* reads 1024 bytes and copies to buffer */
	while ((writeit = read(openfrom, buffer, 1024)) != 0)
	{
		/* check for successful read, errors if it didn't read */
		if (writeit == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
		/* writes from the buffer to dest file or errors if it can't write */
		if (write(opento, buffer, writeit) != writeit)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	/* check for files can be closed*/
	if (close(openfrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openfrom),
		exit(100);
	if (close(opento) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opento),
		exit(100);
return (0);
}
