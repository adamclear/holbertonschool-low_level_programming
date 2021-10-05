#include "main.h"
/**
 * rev_string- reverses a string
 * @s: input variable pointer
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	char *ptrb, *ptre, ch;

	l = _strlen(s);

	ptrb = s;
	ptre = s;

	for (i = 0; i < l - 1; i++)
	{
		ptre++;
	}

	for (i = 0; i < l / 2; i++)
	{
		ch = *ptre;
		*ptre = *ptrb;
		*ptrb = ch;

		ptrb++;
		ptre--;
	}
return;
}
/**
 * _strlen- returns length of string
 * @s: input variable pointer
 * Return: l
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
