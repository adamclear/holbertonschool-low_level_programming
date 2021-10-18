#include <stdlib.h>
#include <stdio.h>
/**
 * main- prints all arguments passed to it
 * @argc: number of arguments
 * @argv: pointer to the array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
return (0);
}
