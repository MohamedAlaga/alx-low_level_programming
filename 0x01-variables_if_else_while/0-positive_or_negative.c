#include<stdio.h>
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
{printf("%d is positive",n); }
return (0);
else if (n < 0)
{printf("%d is negative",n); }
else
{printf("%d is zero",n); }
return (0);
}
