#include <stdio.h>
#include "main.h"
/**
 * _strncat -  appends the src string to the dest string
 * @dest: destination strig
 * @src: source strnig
 * @n: number of bytes to append
 *
 * Return: the int converted from the string
 */
char *_strncat(char *dest, char *src, int n)
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
  if (len2 > n)
    len2 = n;
  for (i = 0; i < len2; i++)
  {
    dest[len + i] = src[i];
  }
  dest[len + len2] = '\0';
  return (dest);
}
