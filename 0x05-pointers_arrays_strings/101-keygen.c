#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void) {
int pass ;
srand(time(NULL));
pass = rand();
printf("%d",pass);  
return (0);
}
