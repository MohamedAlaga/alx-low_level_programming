#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b:size to be allocated .
 *
 * Return:  pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int len1, len2, i;
char *ptr;
  
len1 = strlen(s1);
len2 = strlen(s2);
if (len2 == 0)
return s1;
if ((int)n < len2)
len2 = n;
ptr = malloc(len1 + len2);
if (ptr == NULL)
return (NULL);
for (i = 0; i < len1; i++)
ptr[i] = s1[i];
for (; i < len1 + len2; i++)
ptr[i] = s2[i - len1];
return ptr;
}
