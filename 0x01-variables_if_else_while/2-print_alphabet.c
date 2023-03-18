#include <stdio.h>
/**
 *main - printalpabit
 *
 *description:print lower case alphabit
 *Return:returns zero
 */

int main(void)
{
char alpha[29] = {"a" ,"b" ,"c" ,"d" ,"e" ,"f" ,"g" ,"h" ,"i" ,"j" ,"k" ,"l" ,"m ", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
int i ;
for (i = 0; i<26; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
