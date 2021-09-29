#include <stdio.h>
/* prints all possible combinations of single-digit numbers */
/**
 * main- prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{

int n = 0;

while (n <= 9)
{
putchar(n % 10 + '0');
n = (n + 1);

while (n < 10)
{
putchar(',');
putchar(' ');
break;
}
}
putchar('\n');
return (0);
}
