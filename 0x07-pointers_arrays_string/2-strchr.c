#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the pointer to the string
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{

    while (*s != '\0' && *s != c)
    {
        s++;
    }

    if (*s == c)
    {
        return (s);
    }
    else
    {
        return (0);
    }
}
