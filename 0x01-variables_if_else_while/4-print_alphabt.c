#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, 
 * followed by a new line
 *
 * Retrun: 0
 */

int main(void)
{
    char alpha;
    alpha = 'a';

    while (alpha <= 'z')
    {
        if (alpha != 'q' && alpha != 'e')
        {
		putchar(alpha);
	}
     	alpha++;
    }
    putchar('\n');
    return (0);
}
