#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char s[] = "_putchar\n";
    int i;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        write(1, &s[i], 1);
    }
    return (0);
}
