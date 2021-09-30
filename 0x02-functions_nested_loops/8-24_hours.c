#include "main.h"
/**
 * jack_bauer- prints each hour and minute for 24hrs
 *
 * Return: void
 */

void jack_bauer(void)
{

	int hrt = 0, mnt = 0;
	int hro = 0, mno = 0;

for (hrt = '0'; hrt <= '2'; hrt++)
{
for (hro = '0'; hro <= '9'; hro++)
{
for (mnt = '0'; mnt <= '5'; mnt++)
{
for (mno = '0'; mno <= '9'; mno++)
{
_putchar(hrt);
_putchar(hro);
_putchar(':');
_putchar(mnt);
_putchar(mno);
_putchar('\n');
}
}
if (hrt == '2' && hro == '3')
{
break;
}
}
}
return;
}
