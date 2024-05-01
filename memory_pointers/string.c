#include <stdio.h>

void messager(char msg[])
{
    printf("Message reads: %s\n", msg);
}

int main()
{
    char message[] = "Hello friends?!";
    messager(message);

    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof("Turtles!"));

    return 0;
}