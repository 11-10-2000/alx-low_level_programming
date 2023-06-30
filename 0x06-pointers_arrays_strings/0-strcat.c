#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @src: input value
 * @dest: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int a;
int c;
a = 0;
while (dest[a] != '\0')
{
a++;
}
c = 0;
while (src[c] != ;\0')
{
dest[a] = src[c];
a++;
c++;
}
dest[a] = '\0';
return (dest);
}
