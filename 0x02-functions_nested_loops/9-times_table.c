#include "main.h"
/**
 * times_table- prints times table
 *
 * Return: void
 */
void times_table(void)
{
	int col, row, dig = 0, inc = 0, mul;
	for (row = 0; row < 10; row++)
		{
			mul = 0;
			for (col = 0; col < 10; col++)
				{
					if (col == 0)
						{
							_putchar((dig + mul) + '0');
						}
					else
						{
							_putchar((dig + mul + inc) + '0');
						}
							if (col == 9)
								{
									break;
								}
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
							mul++;
				}
			_putchar('\n');
			inc++;
		}
	return;
}
