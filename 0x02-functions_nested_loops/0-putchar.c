#include <stdio.h>
#include "_putchar.c"
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int i;
char a [] = "_putchar";
for(i = 0 ; i < 8 ; i++)
_putchar(a[i]);
return (0);
}
