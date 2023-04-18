#include "main.h"
/**
* _puts_recursion - function that prints a string, followed by a new line
*@s : user input
*
* Return: no return.
*/
int _pow_recursion(int x, int y)
{if (y > 0)
{
return (x * _pow_recursion(x,y - 1));
}
else if (y == 0)
{
return (1);
}
else
{
return(-1);
} 
}
