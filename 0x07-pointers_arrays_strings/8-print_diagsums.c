#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of integers
 * @a: pointer to matrix
 * @size: size of matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
    int i, j, sum1, sum2;
    j = 0;
    sum1 = 0;
    sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];

        sum2 += a[i * size + (size - 1 - j)];
    }

    printf("%d, %d\n", sum1, sum2);
}
