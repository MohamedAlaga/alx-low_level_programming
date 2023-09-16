#include "variadic_functions.h"
#include"stdio.h"
/**
 * print_numbers - print numbers
 * @separator : string
 * @n : int
 * Return: sum of all args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list nums;
va_start(nums, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));
if (separator != NULL)
printf("%s", separator);
}
printf("\n");
}
