#include <stdio.h>

typedef struct
{
    const char *description;
    float duration;
} exercise;

typedef struct
{
    const char *ingredients;
    float weight;
} meal;

typedef struct
{
    meal food;
    exercise exercise;
} preferences;

typedef struct
{
    const char *name;
    const char *species;
    preferences care;
} fish;

void catalog(fish f)
{
    printf("Name: %s\n", f.name);
    printf("Species: %s\n", f.species);
    printf("Food ingredients: %s\n", f.care.food.ingredients);
    printf("Food weight: %.1f lbs\n", f.care.food.weight);
    printf("Exercise description: %s\n", f.care.exercise.description);
    printf("Exercise duration %.1f hours\n\n", f.care.exercise.duration);
}

int main()
{

    fish snapy = {
        "Snappy",
        "Piranha",
        {{"meat",
          0.2},
         {"swim in the jacuzzi",
          7.5}}};

    catalog(snapy);

    return 0;
}
