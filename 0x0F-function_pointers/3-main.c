#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*result)(int, int) = get_op_func(argv[2]);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1])
{
printf("Error\n");
exit(99);
}
if (result == NULL)
{
printf("Error\n");
exit(99);
}
(void)argc;
printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
return (0);
}
