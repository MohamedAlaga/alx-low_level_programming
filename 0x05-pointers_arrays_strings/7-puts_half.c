#include <stdio.h>
/**
 * puts_half - function that prints half of a strin.
 * @str : string to  print
 *
 * Return: no any
 */
void puts_half(char *str) {
int len = 0;
int halfLen;
int i;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0) {
halfLen = len / 2;
}
else
{
halfLen = (len + 1) / 2;
}
for (i = 0; i < len; i++)
{
if (i > halfLen-1)
{
printf("%c", str[i]);
}
}
printf("\n");
}
