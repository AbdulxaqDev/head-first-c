#include <stdio.h>

struct user;

typedef void (*PrintFullnameFunc)(struct user);

typedef struct user
{
    const char *name;
    const char *surname;
    PrintFullnameFunc printFullname;
} user;

void printFullname(struct user u)
{
    printf("The fullname is %s %s\n", u.name, u.surname);
}

int main()
{
    user user1 = {"Brendan", "Eich", printFullname};
    user1.printFullname(user1);
    return 0;
}