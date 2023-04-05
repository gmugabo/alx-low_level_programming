#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: a pointer to the beginning if substring is found
 * Null if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	{
		while (*haystack)
		{
			p1 = haystack;
			p2 = needle;

			while (*p2 && *p1 == *p2)
			{
				p1++;
				p2++;
			}
			if (*p2 == '\0')
			{
				return (haystack);
			}
		haystack++;
	}
	return (0);
}
return (0);
}
