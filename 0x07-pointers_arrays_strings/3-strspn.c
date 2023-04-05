#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string being searched
 * @accept: prefix to be measured
 *
 * Return: number of bytes in s that
 * consists of bytes from accpet
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	char *p1, *p2;

	for (p1 = s; *p1; p1++)
	{
		for (p2 = accept; *p2; p2++)
		{
			if (*p1 == *p2)
			{
				byt++;
				break;
			}
		}
		if (*p2 == '\0')
			break;
	}
	return (byt);
}
