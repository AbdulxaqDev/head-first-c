#include <stdio.h>

void go_south_east(int, int);

int main()
{
    int latitude = 32;
    int longtitude = -64;

    go_south_east(latitude, longtitude);
    printf("Asast! Now at [%i, %i]\n", latitude, longtitude);
    return 0;
}

void go_south_east(int lat, int lon)
{
    lat--;
    lon++;
    printf("Asast! Changing to [%i, %i]\n", lat, lon);
}