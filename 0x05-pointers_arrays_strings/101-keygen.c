#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
    int sum = 0;
    int c;
    int target = 2772;

    srand(time(NULL));

    while (sum < target)
    {
        c = rand() % 128;
        if (sum + c > target)
        {
            c = target - sum;
        }
        sum += c;
        printf("%c", c);
    }

    printf("\n");

    return (0);
}
