#include"main.h"
/**
 * sum_them_all - return arg sum
 * @n: int
 * Return: sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0, i = 0;
va_list nums;
if (n == 0){return (0);}
va_start(nums,n);
for (i = 0 ; i < n ; i++)
{
  sum+=va_arg(nums, int);
}
va_end(nums);
  return (sum);
}