#include <stdio.h>

void encrypt(char *message)
{
    while (*message)
    {
        *message = *message ^ 31;
        message++;
    }
}

void decrypt(char *message)
{
    while (*message)
    {
        *message = *message ^ 31;
        message++;
    }
}

int main()
{
    char message[20] = "this is the text";

    encrypt(message);
    printf("%s\n", message);

    decrypt(message);
    printf("%s\n", message);

    return 0;
}