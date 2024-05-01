#include <stdio.h>

void go_south_east(int *, int *);

int main()
{
    int latitude = 32;
    int longtitude = -64;

    go_south_east(&latitude, &longtitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longtitude);

    int x = 4;
    int *address_of_x = &x;
    int value_of_x = *address_of_x;
    printf("address of x: %p\n", address_of_x);
    printf("value of x: %i\n", value_of_x);

    return 0;
}

void go_south_east(int *lat, int *lon)
{
    *lat = *lat-1;
    *lon = *lon+1;
}