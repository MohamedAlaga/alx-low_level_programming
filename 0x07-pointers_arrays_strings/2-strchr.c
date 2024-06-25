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
if (c == '\0')
return (s);
dest = NULL;
for (i = 0; s[i] != '\0'; i++)
if (s[i] == c)
{
dest = &s[i];
break;
}
return (dest);
}
