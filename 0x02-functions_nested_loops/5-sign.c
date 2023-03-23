#include <stdio.h>
/**
 * print_sign - check if lower case
 *@c : is the number th user wants to check
 *
 * Return: one if lower zero if upper (Success)
 */
int print_sign(int c)
{
if (c > 0)
{
return ('+1');
}
else if (c < 0)
{
return('-1');
}
else
{
return ('00');
}
}
