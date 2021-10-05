#include "main.h"
/**
 * print_rev- prints a string in reverse
 * @s: input string pointer
 * Return: void
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	while (l > 0)
	{
		_putchar(*s);
		s--;
		l--;
	}
	_putchar('\n');
return;
}
