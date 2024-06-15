#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user
{
    char *name;
    int age;
    struct user *next;
} user;

user *createUser(char *, int);
void display(user *);
void release(user *);

int main()
{
    user eddy = {"eddy", 23, NULL};
    user julia = {"julia", 45, NULL};
    user john = {"John", 33, NULL};

    eddy.next = &julia;
    julia.next = &john;

    display(&eddy);
    release(&eddy);

    return 0;
}

user *createUser(char *name, int age)
{
    user *i = malloc(sizeof(user));
    i->name = strdup(name);
    i->age = age;
    i->next = NULL;
    return i;
}
void display(user *start)
{
    user *i = start;
    for (; i != NULL; i = i->next)
    {
        printf("{user: \"%s\",", i->name);
        printf(" age: \"%i\"}\n", i->age);
    }
}
void release(user *start)
{
    user *i = start;
    user *next = NULL;
    for (; i != NULL; i = next)
    {
        next = i->next;
        free(i->name);
        free(i);
    }
}