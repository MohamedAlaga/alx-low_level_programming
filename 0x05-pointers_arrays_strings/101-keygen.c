#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void) {
srand(time(NULL));
int pass ;
pass = rand();
printf("%d",pass);  
return (0);
}
