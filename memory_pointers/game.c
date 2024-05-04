#include <stdio.h>

void go_south_east(int *, int *);

int main()
{
    int latitude = 32;
    int longtitude = -64;

    // go_south_east(&latitude, &longtitude);
    // printf("Avast! Now at: [%i, %i]\n", latitude, longtitude);

    int s[] = {4, 3, 5, 6};
    int *t = s;
    printf("address of x: %d\n", &s == s);
    printf("value of x: %p\n", t);
    printf("value of x: %p\n", s);

    return 0;
}

void go_south_east(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}