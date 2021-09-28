#include <stdio.h>
/* prints numbers from 0 to 9 */
/**
 * main- prints numbers from 0 to 9
 *
 * Return: 0
 */

int main(void)
{

int n = 0;

for (n = 0; n <= 9; n++)
{

if (n <= 9)
{
putchar(n % 10 + '0');
}
}
putchar('\n');

return (0);
}
