#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - greater or less
 *
 *Descreption:guess first number
 *Return: return nothing
 */
int main(void)
{
int n, y;
srand(time(0));
n = rand() - RAND_MAX / 2;
y = n / 10;
y * 10;
y = n - y;
if (y > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, y);
}
else if (y == 0)
{
printf("Last digit of %d is %d and is 0", n, y);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, y);
}
return (0);
}
