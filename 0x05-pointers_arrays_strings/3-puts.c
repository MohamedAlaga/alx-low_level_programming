#include<stdio.h>
/**
 * _puts - function that prints a string, followed by a new line
 *@s : user input
 *
 * Return: no any
 */
void _puts(char *str)
{
for(;*str !='\0';str++)
{
putchar(*str);
}
putchar('\n');
}