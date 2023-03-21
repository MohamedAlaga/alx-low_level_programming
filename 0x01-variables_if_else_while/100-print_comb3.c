#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, y;
for (i = 0 ; i <= 9 ; i++)
for (y = 0 ; y <= 9 ; y++)
{
if (y > i)
{
putchar('0' + i);
putchar('0' + y);
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
