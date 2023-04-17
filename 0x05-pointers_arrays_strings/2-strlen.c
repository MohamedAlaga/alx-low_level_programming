/**
 * swap_int - swaps the values of two integers.
 *@s : user input
 *@ptr : pointer of string
 *
 * Return: string lingth
 */
int _strlen(char *s)
{
char ptrVal = *s ;
int i;
for (i = 0;ptrVal != '\0';i++ )
{
ptrVal ++;
}
return i ;
}