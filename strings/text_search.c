#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[])
{
    int str_len = strlen(search_for) - 1; // fgets is adding new line character to inout, so we
    if (search_for[str_len] == '\n')      // we are changing the new line character to \0 end of the string
        search_for[str_len] = '\0';

    int i;
    for (i = 0; i < 5; i++)
        if (strstr(tracks[i], search_for))
            printf("Track %i: '%s'\n", i, tracks[i]);
}

void print_reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len - 1;

    while (t >= s)
    {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}

int main()
{
    // char search_for[80];
    // printf("Search for: ");
    // fgets(search_for, 80, stdin);
    // find_track(search_for);

    char name[] = "Brendan Eich";

    print_reverse(name);

    return 0;
}