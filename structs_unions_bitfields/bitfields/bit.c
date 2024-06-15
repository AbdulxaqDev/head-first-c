#include <stdio.h>

typedef struct
{
    unsigned int first_visit : 1;
    unsigned int come_again : 1;
    unsigned int fingers_lost : 4;
    unsigned int shark_attack : 1;
    unsigned int days_a_week : 3;

} survey;

int main()
{
    survey s1 = {
        .first_visit = 0,
        .come_again = 1,
        .fingers_lost = 0,
        .shark_attack = 0,
        .days_a_week = 7,
    };

    printf("%i %i %i %i %i\n",
           s1.first_visit,
           s1.come_again,
           s1.fingers_lost,
           s1.shark_attack,
           s1.days_a_week);

    return 0;
}