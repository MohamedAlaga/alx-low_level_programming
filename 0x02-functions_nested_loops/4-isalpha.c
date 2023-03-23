/**
 * _isalpha - check if lower case
 *@c : is the number th user wants to check
 *
 * Return: one if lower zero if upper (Success)
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 90))
{
return (1);
}
else
{
return (0);
}
}
