#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - chose a random number
 *
 * descreption:giving a rndom number and print if positve or nigatne
 * Return: just end the program
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{Printf("is positive"); }
return (0);
if (n < 0)
{Printf("is negative"); }
else
{Printf("is zero"); }
return (0);
}
