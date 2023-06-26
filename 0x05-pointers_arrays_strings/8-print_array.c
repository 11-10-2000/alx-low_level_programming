#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements
 * of an array of integers,
 * followed by a new line.
 * @a: array of integers
 * @n: number of elements of the array
 * Return: void
 */
void print_array(int *a, int n)
{
int t;
for (t = 0; t < n; t++)
{
printf("%d", a[t]);
if (t != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
