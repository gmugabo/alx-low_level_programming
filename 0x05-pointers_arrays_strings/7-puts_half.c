#include "main.h"
#include <unistd.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to a string
 */

void puts_half(char *str)
{
    int len = 0;
    int i;
    int n;

    while (str[len] != '\0')
    {
        len++;
    }

    if (len % 2 == 0)
    {
        n = len / 2;
    }
    else
    {
        n = (len - 1) / 2 + 1;
    }

    for (i = n; i < len; i++)
    {
        write(1, &str[i], 1);
    }

    write(1, "\n", 1);
}
