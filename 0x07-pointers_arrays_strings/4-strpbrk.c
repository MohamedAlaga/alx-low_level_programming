#include <stdio.h>
/**
 * _strpbrk - locates the first occurrence in the s of any of the bytes in
 * accept.
 * @s: string to search inside .
 * @accept: bytes to accept.
 *
 * Return: pointer to the string.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
return (&s[i]);
return ('\0');
}
