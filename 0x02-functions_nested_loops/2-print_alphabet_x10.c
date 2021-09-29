#include "main.h"
/**
 * print_alphabet_x10- prints the alphabet 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int i = 0, j;
char c = 'a';
while (i < 10)
{
j = 0;
while (j < 1)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
j++;
}
_putchar('\n');
i++;
}

return;
}
