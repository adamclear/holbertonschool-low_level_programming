#include <stdio.h>
/* This file prints the sizes of various data types */
/**
 * main - Prints the sizes of various data types
 *
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %li byte(s)\n", sizeof(char));
printf("Size of an int: %li byte(s)\n", sizeof(int));
printf("Size of a long int: %li byte(s)\n", sizeof(long));
printf("Size of a long long int: %li byte(s)\n", sizeof(double));
printf("Size of a float: %li byte(s)\n", sizeof(float));

return (0);
}
