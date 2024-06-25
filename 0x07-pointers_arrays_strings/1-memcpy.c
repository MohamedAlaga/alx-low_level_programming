#include <stdio.h>
/**
 * _memcpy - function that copies memory area..
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to the dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
