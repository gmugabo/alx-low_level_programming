#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to the string to print
 */

void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    else
    {
        _print_rev_recursion(s + 1);
        write(1, s, 1);
    }
}
