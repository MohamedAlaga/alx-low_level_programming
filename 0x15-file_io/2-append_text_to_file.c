#include "main.h"

/**
 * append_text_to_file - append to a file
 *@filename : file directory
 *@text_content : string
 * Return: 1 on success -1 o fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600), len;
if (filename == NULL || f == -1)
return (-1);
if (text_content == NULL)
{
text_content = "";
}
for (len = 0; text_content[len] != '\0'; len++)
continue;
write(f, text_content, len);
close(f);
return (1);
}
