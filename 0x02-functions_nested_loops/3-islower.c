#include "main.h"
/**
 * _islower- checks if a letter is lower case
 * @c: variable of integer or letter
 *
 * Return: c
 */

int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
