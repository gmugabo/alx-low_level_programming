#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be considered identical, otherwise return 0
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 1 if s1 and s2 are identical, 0 if they are not
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
    {
        return (1);
    }

    else if (*s2 == '*' && *s1 != '\0' && *(s2 + 1) != *s1)
    {
        return (wildcmp(s1 + 1, s2));
    }

    else if (*s2 == '*' && *(s2 + 1) == *s1)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }

    else if (*s2 == '*' && *s1 == '\0')
    {
        return (wildcmp(s1, s2 + 1));
    }

    else if (*s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }

    else if (*s2 == '*' && *s1 != '\0')
    {
        return (1);
    }

    else
    {
        return (0);
    }
}
