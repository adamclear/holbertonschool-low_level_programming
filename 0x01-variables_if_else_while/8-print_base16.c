#include <stdio.h>
/* prints numbers from 0 to 15 in base 16 */
/**
 * main- prints numbers from 0 to 16 in base 16
 *
 * Return: 0
 */

int main(void)
{

int n = 0x0;

for (n = 0x0; n <= 0xF; n++)
{

if (n < 10)
{
putchar(n % 16 + '0');
}

else if (n > 9 && n <= 0xF)
{
putchar(n % 16 + 87);
}
}
putchar('\n');

return (0);
}
