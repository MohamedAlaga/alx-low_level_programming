#include "main.h"
#include <stdio.h>
/**
* _print_all- print string backword
*@s : user input
*
* Return: no return.
*/
void _print_all(char *s)
{
if (*s != *"\n")
{
putchar(*s);
s--;
_print_all(s);
}
else
{
putchar('\n');
}
}
/**
* _print_rev_recursion - function send the cursour to the end of the string
*@s : user input
*
* Return: no return.
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
}
else
{
_print_all(s);
}
}
