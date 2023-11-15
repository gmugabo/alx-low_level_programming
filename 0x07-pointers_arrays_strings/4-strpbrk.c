#include "main.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to set of bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept, or NULL if none is found
 */

char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                return (s + i);
            }
        }
    }

    return (0);
}
