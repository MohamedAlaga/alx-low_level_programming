/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to search inside .
 * @accept: bytes to accept.
 *
 * Return: pointer to the string.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int sum, i, j;

sum = 0;
for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
{
sum++;
break;
}
return (sum);
}
