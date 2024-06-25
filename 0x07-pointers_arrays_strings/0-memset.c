#include <stdio.h>
/**
 * _memset -  fills memory with a constant byte.
 * @s: string to be changed.
 * @b: byte to be used.
 * @n: number of bytes to be changed.
 *
 * Return: pointer to the string.
 */
char *_memset(char *s, char b, unsigned int n) 
{
int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
