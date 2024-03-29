#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        write(1, "\n", 1);
    }
    else
    {
        write(1, s, 1);
        _puts_recursion(s + 1);
    }
}
