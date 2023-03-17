#include <stdio.h>

/*
 * This program prints the lowercase alphabet
 * using the putchar function.
 */
int main(void)
{
    char c;
    for (c = 'a'; c <= 'z'; ++c) 
        putchar(c);
    
    putchar('\n');

    return 0;
}
