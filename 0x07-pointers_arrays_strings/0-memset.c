#include "main.h"

/**
 * _memset - loads the memory with constant byte
 * @s: memory location to be loaded
 * @b: char to be copied
 * @n: the number of times it will be copied
 *
 * Return: pointer to memory location  s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
