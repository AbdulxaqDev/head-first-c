#include <stdio.h>
#include <stdlib.h>


int main()
{
    char *name = malloc(sizeof(char)*20);
    name[0] = 'B';
    name[1] = 'R';
    name[2] = 'E';
    name[3] = 'N';
    name[4] = 'D';
    name[5] = 'A';
    name[6] = 'N';

    printf("%s\n", name);
}