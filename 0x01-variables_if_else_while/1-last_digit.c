#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* generates a random integer and prints last digit, <6, >5, 0. */
/**
 * main- generates integer, prints last digit, <6, >5, 0.
 *
 * Return: 0
 */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (l < 6 && l != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
}
else if (l == 0)
{
printf("Last digit of %d is %d and is 0\n", n, l);
}
else
{
printf("Last digit of %d is %d and is greater than 5\n", n, l);
}

return (0);
}
