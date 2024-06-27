#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: Second string.
 * @n:number of bytes to concat .
 *
 * Return:  pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  int len1, len2, i;
  char *ptr;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";
  len1 = strlen(s1);
  len2 = strlen(s2);
  if ((int)n < len2)
    len2 = n;
  ptr = malloc(sizeof(char) * (len1 + len2));
  if (ptr == NULL)
    return (NULL);
  for (i = 0; i < len1; i++)
    ptr[i] = s1[i];
  for (; i < len1 + len2; i++)
    ptr[i] = s2[i - len1];
  return ptr;
}
