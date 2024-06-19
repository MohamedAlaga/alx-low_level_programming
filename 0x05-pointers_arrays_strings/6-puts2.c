#include <stdio.h>
/**
 * puts2 - function that prints every other character of a string.
 * @str : string to  print
 *
 * Return: no any
 */
void puts2(char *str)
{
int i;
int len = 0;
while (str[len] != '\0')
len++;
for (i = 0; i < len ; i++)
{
if (i % 2 == 0)
printf("%c", str[i]);
}
printf("\n");
}
