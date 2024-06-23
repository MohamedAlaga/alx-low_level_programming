#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper -  convert any letter to Upper case
 * @arr: array of string
 *
 * Return: the upper string
 */
char *string_toupper(char *arr)
{
  int len, i;
  len = strlen(arr);
  for (i = 0; i < len; i++)
    if (arr[i] >= 'a' && arr[i] <= 'z')
      arr[i] = arr[i] - 32;
  return arr;
}
