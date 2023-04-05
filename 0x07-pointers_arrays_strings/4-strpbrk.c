#include "main.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: if a set is searched, a pointer to match byte
 * if no set is mathed, null
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *p)
				return (p);
			a++;
		}
		p++;
	}
	return (0);
}
