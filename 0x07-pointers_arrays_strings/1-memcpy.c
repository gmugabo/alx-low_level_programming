#include "main.h"

/**
 * _memcpy - copies the @n bytes from memory location @src
 * @n: copies from memory location
 * @src: memory location
 * @dest: memory location to copy the bytes
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpy = 0;

	for (cpy = 0; cpy < n;)
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	return (dest);
}
