#include <_putchar.c>
/**
 * _puts - function that prints a string, followed by a new line
 *@s : user input
 *
 * Return: no any
 */
void _puts(char *str)
{
char *ptrVal = str ;
do{_putchar(*ptrVal);}
while(*ptrVal++);
_putchar('\n');
}