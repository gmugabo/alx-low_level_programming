#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive integers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main (int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, carry, n1, n2, *result, s = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);

	if (!result)
		return (1);
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		n1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) -1; len2 >= 0; len2-- )
		{
			n2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (n1 * n2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (s = 0; s < len - 1; s++)
	{
		if (result[s])
			s = 1;
		if (s)
			_putchar(result[s] + '0');
	}
	if (!s)
		_putchar('0');
	_putchar('\n');
	free(result);

	return (0);
}

