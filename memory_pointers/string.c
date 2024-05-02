#include <stdio.h>

void messager(char msg[])
{
    puts(msg + 6); // getting the seventh element of array
}

int main()
{
    char message[] = "Hello friends?!";
    puts(message + 6);
    messager(message);

    printf("address of array: %p\n", message);
    printf("3st element of array: %c\n", message[2]);
    printf("3st element of array: %c\n", *(message + 2));

    return 0;
}