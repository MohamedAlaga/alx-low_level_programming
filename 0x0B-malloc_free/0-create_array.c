#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: char
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}
else
{
char *arr = NULL;
unsigned int i;
arr = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
arr[i]= c;
return (arr);
}
}
