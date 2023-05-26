#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		i += xor & 1;
		xor >>= 1;
	}
	return (i);
}
