#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 on success
 */

int main(void)
{
    long num = 612852475143;

    long max_factor = -1;
    long factor = 2;

    while (num > 1)
    {
        if (num % factor == 0)
        {
            if (factor > max_factor)
            {
                max_factor = factor;
            }

            num /= factor;
        }

        else
        {
            factor++;
        }
    }

    printf("%ld\n", max_factor);

    return (0);
}
