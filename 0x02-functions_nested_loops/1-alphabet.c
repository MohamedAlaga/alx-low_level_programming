#include "main.h"
#include <stdio.h>
/**
 * print_alphabet -alphabet 
 *
 * Return: none (Success)
 */
void print_alphabet(void)
{
char a ;
for(a = 'a' ; a <= 'z' ; a++)
_putchar(a);
_putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
