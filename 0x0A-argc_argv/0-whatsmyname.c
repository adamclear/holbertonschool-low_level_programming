#include <stdlib.h>
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main- program prints its own name
 * @argc: number of arguments
 * @argv: pointer to array of arguments passed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
return (0);
}
