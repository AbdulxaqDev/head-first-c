#include <stdio.h>

enum tResponse{ DUMP,  SECOND_CHANCE, MARRIAGE };

typedef struct {
    const char *name;
    enum tResponse type;
} response;

void dump(response r){
    puts(r.name);
    printf("you are dump, so the relationship is finished\n", r.name);
}

void second_chance(response r){
    puts(r.name);
    printf("you are lucky, so you have a second chance\n", r.name);
}

void marriage(response r){
    puts(r.name);
    printf("you are AMAZING, YOU ARE GOING TO HAVE A MARRIAGE\n", r.name);
}

void (*replies[])(response) = { dump, second_chance, marriage };
response r[] = {
    { "Brendan", MARRIAGE },
    { "Jpohn", DUMP },
    { "Jonatan", SECOND_CHANCE },
    { "Bekham", DUMP }
};

int main()
{

    for(int i = 0; i < 4; i++){
        puts("--------");
        (replies[r[i].type])(r[i]);
    }
    puts("--------");

    return 0;
}