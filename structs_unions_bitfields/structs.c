#include <stdio.h>

struct preferences
{
    const char *food;
    float exerciese_hours;
};

struct fish
{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void catalog(struct fish f)
{
    printf("%s is a %s with %i teeth. He is %i.\n",
           f.name, f.species, f.teeth, f.age);
    printf("%s likes to eat %s. ", f.name, f.care.food);
    printf("%s likes to exercise for %.2f hours\n", f.name, f.care.exerciese_hours);
}

void label(struct fish f)
{
    printf("{\n");
    printf("    name: %s\n", f.name);
    printf("    species: %s\n", f.species);
    printf("    teeth: %i\n", f.teeth);
    printf("    age: %i\n", f.age);
    printf("    care: {\n");
    printf("            food: %s\n", f.care.food);
    printf("            exerciese_hours: %.2f\n", f.care.exerciese_hours);
    printf("          }\n");
    printf("}\n");
}

int main()
{

    struct fish snapy = {"Brendan", "Shark", 45, 35, {"Meat", 7.5}};

    label(snapy);
    puts("");
    catalog(snapy);

    return 0;
}
