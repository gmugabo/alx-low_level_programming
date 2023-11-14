#include "main.h"
#include <stdio.h>

/**
 * _memset - fill  block of memory with  specific value
 * @s: starting address of the memory to be filled
 * @b: the desired value
*/

char *_memset(char *s, char b, unsigned int n)
{
    
    char *p = s;

    while (n > 0)
    {
        *p = b;

        p++;

        n--;
    }
    return (s);
}

