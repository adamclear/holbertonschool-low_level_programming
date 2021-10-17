#include "main.h"
/**
 * _isalpha- checks if a character is alphabetic
 * @c: variable for alpha or not
 *
 * Return: c
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
c = 1;
}
else
{
c = 0;
}

return (c);
}
