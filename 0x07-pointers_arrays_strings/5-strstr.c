#include <stdio.h>
#include <string.h>
/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack.
 * @haystack: string to search inside .
 * @needle: string to find.
 *
 * Return: pointer to the string.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, len, checked;

checked = 0;
len = strlen(needle);
for (i = 0; haystack[i] != '\0'; i++) {
for (j = 0; needle[j] != '\0'; j++) {
if (haystack[i] != needle[j]) {
checked = 0;
break;
}
else
{
checked += 1;
i += 1;
}
}
if (checked == len)
{
return (haystack + i - checked);
}
}
return ('\0');
}
