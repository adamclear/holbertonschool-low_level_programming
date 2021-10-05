#include "main.h"
/**
 * puts2- prints every other character of a string
 * @str: input variable pointer
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		if (*str == '\0')
		{
			break;
		}
		else
		{
			str++;
		}
	}
	_putchar('\n');
return;
}
