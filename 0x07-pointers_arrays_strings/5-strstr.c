#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
    int i, j, k;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (j = 0, k = i; needle[j] != '\0' && haystack[k] != '\0'; j++, k++)
        {
            if (haystack[k] != needle[j])
            {
                break;
            }
        }

        if (needle[j] == '\0')
        {
            return (haystack + i);
        }
    }

    return (0);
}
