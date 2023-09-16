#include "variadic_functions.h"
#include"stdio.h"
/**
 * sum_them_all - return arg sum
 * @n: int
 * Return: sum of all args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list nums;
va_start(nums, n);
for (i = 0; i < n; i++)
{
printf("%d",va_arg(nums, int););
if(separator != NULL)
pirnf("%s",separator);
}
}