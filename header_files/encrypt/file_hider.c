#include <stdio.h>
#include "encrypt.h"

int main(int argc, char *argv[])
{
    FILE *source = fopen(argv[1], "r");
    FILE *encrypted = fopen(argv[2], "w");

    char msg[80];
    while (fscanf(source, "%79[^\n]\n", msg) == 1)
    {
        encrypt(msg);
        fprintf(encrypted, "%s\n", msg);
    }

    fclose(source);
    fclose(encrypted);

    return 0;
}