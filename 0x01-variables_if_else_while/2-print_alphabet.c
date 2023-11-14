#include <stdio.h>

/**
 * main - program to print alphabet in lowercase
 *
 * Return: 0
*/

int main(void)
{
    char alpha;
    
    alpha = 'a';
    
    while (alpha <= 'z')
    {
	    putchar(alpha);
	    alpha++;
    }
    putchar('\n');
    return (0);
}


