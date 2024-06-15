#include <stdio.h>

typedef struct
{
    const char *major;
    int grade;
} edu;

typedef struct
{
    const char *name;
    const char *surname;
    int gender;
    edu education;
} student;

int main()
{
    // student student_1 = {"Brendan", "Eich", 1, {"Coputer Science", 3}};
    student student_1 = {
        .name = "Brendan",
        .surname = "Eich",
        .gender = 1,
        {
            .grade = 2,
            .major = "Computer Science",
        },
    };

    printf("%s %s is %i year student at university and \n%s is studying %s major.\n",
           student_1.name,
           student_1.surname,
           student_1.education.grade,
           student_1.gender ? "he" : "she",
           student_1.education.major);

    return 0;
}