#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to be used
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count_byt;

	for (count_byt = 0; count_byt < n && src[count_byt] != '\0'; count_byt++)
		dest[count_byt] = src[count_byt];
	for (; count_byt < n ; count_byt++)
		dest[count_byt] = '\0';
	return (dest);
}
