#include <stdio.h>
/**
 * main - print args in new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int multi;
multi = atoi(argv[1])*atoi(argv[2]);
printf("%d",multi);
return (0);
}
else
{
print("Error");
return (1);
}
}
