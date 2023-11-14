#include <stdio.h>

/**
 * main - program that prints all single digit numbers 
 * of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
    int n;
    n = 48;

    while (n < 58)
    {
        putchar(n);
        n++;
    }
    putchar('\n');
    return (0);
}
