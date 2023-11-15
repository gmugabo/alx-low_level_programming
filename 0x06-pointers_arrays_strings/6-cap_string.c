#include "main.h"

/**
 * is_separator - checks if a character is a separator of words
 * @c: character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */

int is_separator(char c)
{
    char sep[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; sep[i] != '\0'; i++)
    {
        if (c == sep[i])
        {
            return (1);
        }
    }

    return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to the modified string
 */

char *cap_string(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (i == 0 || is_separator(s[i - 1]))
            {
                s[i] = s[i] - 32;
            }
        }
        i++;
    }

    return (s);
}
