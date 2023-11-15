#include "main.h"

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */

int mul(int a, int b)
{
    int product = 0;
    int i;

    if (a == 0 || b == 0)
    {
        return (0);
    }

    if (b > 0)
    {
        for (i = 0; i < b; i++)
        {
            product += a;
        }
    }

    else
    {
        for (i = 0; i < -b; i++)
        {
            product -= a;
        }
    }

    return (product);
}
