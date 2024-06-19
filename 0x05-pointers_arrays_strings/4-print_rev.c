#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse.
 * @s : string to print in reverse
 *
 * Return: no any
 */
void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
s--;
while (len > 0)
{
printf("%c", *s);
s--;
len--;
}
putchar('\n');
}
