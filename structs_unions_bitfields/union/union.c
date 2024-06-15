#include <stdio.h>

// ----------

typedef enum
{
    COUNT,
    POUNDS,
    PINTS,
} unit_of_measure;

typedef union
{
    short count;
    float weight;
    float volume;
} quantity;

typedef struct
{
    const char *name;
    const char *country;
    quantity amount;
    unit_of_measure units;
} fruit_order;

void display(fruit_order order)
{
    printf("This order contains ");
    if (order.units == PINTS)
        printf("%2.2f pints of %s\n", order.amount.volume, order.name);
    else if (order.units == POUNDS)
        printf("%2.2f lbs of %s\n", order.amount.weight, order.name);
    else
        printf("%i %s\n", order.amount.count, order.name);
}

typedef union
{
    short count;
    float weight;
    float litre;
} measure;

typedef struct
{
    const char *name;
    measure amount;
    unit_of_measure T;
} fruit;

void display_fruit(fruit f)
{
    printf("There is order ");
    if (f.T == COUNT)
        printf("%i %s.\n", f.amount.count, f.name);
    if (f.T == POUNDS)
        printf("%2.2f kg(s) of %s.\n", f.amount.weight, f.name);
    if (f.T == PINTS)
        printf("%2.2f litre(s) of %s.\n", f.amount.litre, f.name);
}

int main()
{

    fruit_order apples = {"apples", "England", .amount.count = 144, COUNT};
    fruit_order strawberries = {"strawberries", "Spain", .amount.weight = 17.6, POUNDS};
    fruit_order oj = {"orange juice", "U.S.A", .amount.volume = 10.5, PINTS};

    display(apples);
    display(strawberries);
    display(oj);

    puts("");
    puts("");
    puts("");

    fruit apple = {.name = "Apple", .amount.count = 100, COUNT};
    fruit strawberry = {.name = "Strawberry", .amount.weight = 3.7, POUNDS};
    fruit juce = {.name = "Orange juce", .amount.litre = 7.5, PINTS};

    display_fruit(apple);
    display_fruit(strawberry);
    display_fruit(juce);

    return 0;
}