#include <stdio.h>
/* prints the alphabet in lower case in reverse*/
/**
 * main- prints the alphabet in lower case in reverse
 *
 * Return: 0
 */

int main(void)
{
char ch = 'z';

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');

return (0);
}
