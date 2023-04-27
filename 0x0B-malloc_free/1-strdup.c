#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _strdup - creates an array of chars
 * @str: array of chars
 * Return: 0
 */
char *_strdup(char *str)
{
if (*str == NULL)
{
return (NULL);
}
else
{
char *arr = NULL;
*arr = malloc(strlen(*str)*sizeof(char));
if (str == NULL)
{
return (NULL);
}
else
{
int i;
for (i = 0; i < strlen(str); i++)
{
arr[i] = str[i];
}
return (arr);
}
}
}
