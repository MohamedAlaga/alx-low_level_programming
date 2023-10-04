#include "main.h"
/**
 * read_textfile - print file
 *@filename : file
 *@letters : number of printed cahrs
 * Return: number of charecters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *f = fopen(filename, "r");
char x;
int count = 0;
if (f == NULL)
{
return (0);
}
if ((filename == NULL) || letters == 0 || f == NULL)
{
fclose(f);
return (0);
}
while (fscanf(f, "%c", &x) == 1 && count < (int)letters)
{
printf("%c", x);
count++;
}
fclose(f);
return (count);
}
