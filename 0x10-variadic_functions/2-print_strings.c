#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings in arg
 * @separator : string
 * @n : int
 * Return: sum of all args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list strs;
va_start(strs, n);
for (i = 0; i < n; i++)
{
char *str1 =  va_arg(strs, char*);
if (str1 != NULL)
printf("%s", str1);
else
printf("nil");
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
}
