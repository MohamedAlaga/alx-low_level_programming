#include <stdio.h>
/**
 * _strchr - locates a character in a string.
 * @s: string to search inside .
 * @c: pointer to the first occurrence of the character.
 *
 * Return: pointer to the string.
 */
char *_strchr(char *s, char c)
{
int i;
char *dest;
dest = NULL;
for (i = 0; s[i - 1] != '\0'; i++)
if (s[i] == c)
{
dest = &s[i];
break;
}
return (dest);
}
