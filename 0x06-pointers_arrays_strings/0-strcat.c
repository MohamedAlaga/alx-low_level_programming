#include <stdio.h>
#include "main.h"
/**
 * _strcat -  appends the src string to the dest string
 * @dest: destination strig
 * @src: source strnig
 *
 * Return: the int converted from the string
 */
char *_strcat(char *dest, char *src)
{
  int i, len = 0, len2 = 0;
  for (i = 0; dest[i] != '\0'; i++)
  {
    len++;
  }
  for (i = 0; src[i] != '\0'; i++)
  {
    len2++;
  }
  for (i = 0; i < len2; i++)
  {
    dest[len + i] = src[i];
  }
  dest[len + len2] = '\0';
  return (dest);
}
