#include "main.h"
/**
 * _islower - Checks for lowercase character.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

