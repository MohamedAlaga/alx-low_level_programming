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
if (str == NULL)
{
return (NULL);
}
else
{
int x = strlen(str);
char *arr = NULL;
arr = malloc(x*sizeof(char));
if (str == NULL)
{
return (NULL);
}
else
{
int i;
for (i = 0; i < x + 1; i++)
{
arr[i] = str[i];
}
return (arr);
}
}
}
