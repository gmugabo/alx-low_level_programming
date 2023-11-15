#include "main.h"
#include <unistd.h>

/**
 * puts2 - prints every other character of a string, starting with the first character, followed by a new line
 * @str: pointer to a string
 */
void puts2(char *str)
{
    int len = 0;
    int i;

    while (str[len] != '\0')
    {
       len++;
    }

    for (i = 0; i < len; i += 2)
    {
        write(1, &str[i], 1);
    }

    write(1, "\n", 1);
}
