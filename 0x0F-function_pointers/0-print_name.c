#include "function_pointers.h"
/**
 * print_name - use a func pointer
 * @name: pointer to string
 * @f: ponter to function to use
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if(name != NULL && f !=NULL)
f(name);
}
