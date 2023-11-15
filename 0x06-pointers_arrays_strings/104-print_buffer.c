#include "main.h"
#include <stdio.h>

/**
 * is_printable - checks if a character is printable
 * @c: character to check
 *
 * Return: 1 if c is printable, 0 otherwise
 */

int is_printable(char c)
{
    return (c >= 32 && c <= 126);
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 *
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
    int i, j, k;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = i; j < i + 10; j += 2)
        {
            if (j < size)
            {
                printf("%02x%02x ", b[j], b[j + 1]);
            }

            else
            {
                printf("     ");
            }
        }

        for (k = i; k < i + 10; k++)
        {
            if (k < size)
	    {
                if (is_printable(b[k]))
                {
                    printf("%c", b[k]);
                }

                else
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
}
