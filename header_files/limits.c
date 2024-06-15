#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("INT_MAX: %i\n", INT_MAX);
    printf("INT_MIN: %i\n", INT_MIN);
    printf("------\n");
    printf("FLT_MAX: %f\n", FLT_MAX);
    printf("FLT_MIN: %f\n", FLT_MIN);
    printf("------\n");
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("------\n");
    printf("DBL_MAX: %f\n", DBL_MAX);
    printf("DBL_MIN: %f\n", DBL_MIN);
    printf("------\n");
    printf("SHRT_MAX: %hi\n", SHRT_MAX);
    printf("SHRT_MIN: %hi\n", SHRT_MIN);
    printf("------\n");
    printf("LONG_MAX: %lu\n", LONG_MAX);
    printf("LONG_MIN: %lu\n", LONG_MIN);

    return 0;
}