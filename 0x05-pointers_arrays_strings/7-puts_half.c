#include "main.h"
/**
 * puts_half- prints the second half of a string
 * @str: input variable pointer
 * Return: void
 */
void puts_half(char *str)
{
	int half;
	int l = _strlen(str);

	if (l % 2 == 0)
	{
		half = l / 2;
		str = str + half;
		while (*str <= '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	else
	{
		half = (l - 1) / 2;
		str = str + half;
		while (*str <= '\0')
		{
			_putchar(*str);
			str++;
		}
	}
return;
}

/**
 * _strlen- returns the length of a string
 * @s: input string pointer
 * Return: void
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
return (l);
}
