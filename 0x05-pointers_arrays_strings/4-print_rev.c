#include <stdio.h>
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *@str : user input
 *
 * Return: no any
 */
void print_rev(char *s) {
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
s--;
s--;
while (len > -1)
{
printf("%c", *s);
s--;
len--;
}
putchar('\n');
}
