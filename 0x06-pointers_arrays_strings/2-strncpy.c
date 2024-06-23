#include <stdio.h>
#include "main.h"
/**
 * _strncpy -  copy the src string to the dest string
 * @dest: destination strig
 * @src: source strnig
 * @n: number of bytes to append
 *
 * Return: the int converted from the string
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;

  while (src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }

  while (i < n)
  {
    dest[i] = '\0';
    i++;
  }

  return (dest);
}
