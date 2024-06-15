#include <stdio.h>

int main()
{

    // scanf("", address)
    // char name[40];
    // printf("Enter your name: ");
    // scanf("%39s", name);

    // int age;
    // printf("Enter your age: ");
    // scanf("%i", &age);

    // char first_name[20];
    // char last_name[20];
    // printf("Enter your first and last name: ");
    // scanf("%19s %19s", first_name, last_name);
    // printf("First: %s, Last: %s\n", first_name, last_name);

    // fgets()
    // char food[5];
    // printf("Enter favorite food: ");
    // fgets(food, sizeof(food), stdin);
    // printf("%s\n", food);

    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);

    return 0;
}