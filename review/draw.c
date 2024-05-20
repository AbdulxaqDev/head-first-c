#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void draw_spaces(FILE *scatch, int spaces);
void draw_triangle(FILE *scatch, int height);
void draw_square(FILE *scatch, int height);

int main(int argc, char *argv[])
{
    FILE *scatch = fopen("scatch.txt", "w");
    char ch;
    int h = 0;
    int t = 0;
    int r = 0;

    while ((ch = getopt(argc, argv, "h:tr")) != EOF)
        switch (ch)
        {
        case 'h':
            h = atoi(optarg);
            break;
        case 't':
            t = 1;
            break;
        case 'r':
            r = 1;
            break;
        default:
            printf("Unknown option: '%s'\n", optarg);
            return 1;
        }

    if (t)
        draw_triangle(scatch, h);
    if (r)
        draw_square(scatch, h);

    fclose(scatch);
    return 0;
}

void draw_spaces(FILE *scatch, int spaces)
{
    for (int s = 0; s < spaces; s++)
        fprintf(scatch, " ");
}

void draw_triangle(FILE *scatch, int height)
{
    for (int i = 0; i < height; i++)
    {
        int spaces = height - i - 1;

        draw_spaces(scatch, spaces);
        for (int j = 0; j < i * 2 + 1; j++)
            fprintf(scatch, "*");
        draw_spaces(scatch, spaces);
        fprintf(scatch, "\n");
    }
    fprintf(scatch, "\n");
}

void draw_square(FILE *scatch, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
            fprintf(scatch, "*");
        fprintf(scatch, "\n");
    }
    fprintf(scatch, "\n");
}