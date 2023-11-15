#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
    int i = 0, j;
    char lower[] = "aeotl";
    char upper[] = "AEOTL";
    char leet[] = "43071";

    while (s[i] != '\0')
    {
        for (j = 0; j < 5; j++)
        {
            if (s[i] == lower[j] || s[i] == upper[j])
            {
                s[i] = leet[j];

                break;
            }
        }
        i++;
    }

    return (s);
}
