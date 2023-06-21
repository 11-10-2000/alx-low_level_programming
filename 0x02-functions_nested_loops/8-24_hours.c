#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
int A, B, C, D;
for (A = 0; A <= 2; A++)
{
for (B = 0; B <= 9; B++)
{
for (C = 0; C <= 5; C++)
{
for (D = 0; D <=9; D++)
{
if (A >= 2 && B >= 4)
	break;
_putchar(A + '0');
_putchar(B +'0');
_putchar(':');
_putchar(C + '0');
_putchar(D + '0');
_putchar('\n');
}
}
}
}
}
