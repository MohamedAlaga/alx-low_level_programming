#include <stdio.h>
/**
 * rev_string - function that reverse string.
 * @s : string to  reverse
 *
 * Return: no any
 */
void rev_string(char *s)
{
int i;
char temp;
int len = 0;
while (s[len] != '\0')
len++;
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
