#include <stdio.h>
/* prints the alphabet in lower case */
/**
 * main- prints the alphabet in lower case
 *
 * Return: 0
 */

int main(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')

putchar(ch);
}

putchar('\n');

return (0);
}
