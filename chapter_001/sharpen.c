/*
*   This program logs a string to terminal
*   until the c variable reaches to 0
*/

#include <stdio.h>

int main()
{
    int c = 10;
    while(c > 0)
    {
        puts("Hello there, here some Geeks :)");
        c = c - 1;
    }
    return 0;
}