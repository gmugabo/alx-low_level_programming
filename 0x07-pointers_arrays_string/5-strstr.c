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
    unsigned int i, j, k;
    
    if (needle[0] == '\0')
    {
        return (haystack);
    }
    
    for (i = 0; haystack[i] != '\0'; i++)
    {
	    if (haystack[i] == needle[0])
        {
		k = 1;
	    
	    for (j = 1; needle[j] != '\0'; j++)
            {
		    if (haystack[i + j] != needle[j])
                {
                    k = 0;
                    break;
                }
            }
	    if (k == 1)
            {
                return (haystack + i);
            }
        }
    }
    return (0);
}
