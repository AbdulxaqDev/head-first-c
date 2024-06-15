#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island
{
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island *create(char *name)
{
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}

void display(island *start)
{
    island *i = start;
    for (; i != NULL; i = i->next)
    {
        printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
    }
}

int main()
{
    char name[80];
    // char name1[80];

    fgets(name, 80, stdin);
    island *ammity = create(name);

    fgets(name, 80, stdin);
    island *zack = create(name);

    ammity->next = zack;
    display(ammity);

    // printf("\nName: %s\n", ammity->name);
    // printf("Opens: %s\n", ammity->opens);
    // printf("Closes: %s\n\n", ammity->closes);

    // printf("\nName: %s\n", zack->name);
    // printf("Opens: %s\n", zack->opens);
    // printf("Closes: %s\n\n", zack->closes);

    return 0;
}