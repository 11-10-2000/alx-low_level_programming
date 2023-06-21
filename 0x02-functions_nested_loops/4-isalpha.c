#include "main.h"
/**
 * _isalpha - Checks for Alphabetic character.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}

