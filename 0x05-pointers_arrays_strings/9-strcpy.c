#include <stdio.h>
/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest : dsteination of the copied string
 * @src : source of the string to be copied
 *
 * Return: no any
 */
char *_strcpy(char *dest, char *src)
{
int i;
char temp;
for (i = 0 ; src[i] != '\0' ; i++)
{
temp = src[i];
dest[i] = temp;
}
dest[i] = '\0';
return dest ;
}
