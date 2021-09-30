#include "main.h"
/**
 * times_table- prints times table
 *
 * Return: void
 */

void times_table(void)
{
int r = 0, c = 0, i = 0;

	while (r < 10)
	{

		while (c < 10)
		{

		for (i = 0; i <= (i * 9); i = (i + i));
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		c = c++;
		}
	r = r++;
	}
return;
}
