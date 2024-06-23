#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp -  compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: deferance of the first unmatched character
 */
int _strcmp(char *s1, char *s2)
{
int i, len1, len2;

len1 = strlen(s1);
len2 = strlen(s2);
if (len2 > len1)
len1 = len2;
for (i = 0; i < len1; i++)
if (s1[i] - s2[i] != 0)
return (s1[i] - s2[i]);
return (0);
}
