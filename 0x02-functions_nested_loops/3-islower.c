#include "main.h"
/**
 * _islower- checks if a letter is lower case
 * @c: variable of integer or letter
 *
 * Return: c
 */

int _islower(int c)
{

if (c >= 65 && c <= 90)
{
c = 0;
}
else
{
c = 1;
}
return (c);
}
