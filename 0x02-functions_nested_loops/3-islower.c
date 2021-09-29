#include "main.h"
/**
 * _islower- checks if a letter is lower case
 * @c: variable of integer or letter
 *
 * Return: c
 */

int _islower(int c)
{

if (c >= 'A' && c <= 'Z')
{
c = 0;
}
else
{
c = 1;
}
return (c);
}
