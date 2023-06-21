#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
int L;

L = n % 10;
if (L < 0)
{
_putchar(-L + '0');
return (-L);
}
else
{
_putchar(L + '0');
return (L);
}
}
