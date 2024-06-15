#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    fprintf(stderr, "error :here");
    for (int i = 0; i < n; i++)
        puts("repeated");

    return 0;
}