#include <stdlib.h>
#include <stdio.h>
/**
 * main- prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: the pointer to the array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
return (0);
}
