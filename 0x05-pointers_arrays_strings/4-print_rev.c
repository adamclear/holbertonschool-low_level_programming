#include "main.h"
/**
 * print_rev- prints a string in reverse
 * @s: input string pointer
 * Return: void
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
return;
}
