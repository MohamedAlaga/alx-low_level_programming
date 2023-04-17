/**
 * _strlen - swaps the values of two integers.
 *@s : user input
 *
 * Return: string lingth
 */
int _strlen(char *s)
{
char *ptrVal = s;
int i;
for (i = 0 ; *ptrVal++; i++)
{
ptrVal++;
}
return (i);
}
