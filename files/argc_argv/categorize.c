#include <stdio.h>
#include <string.h>

/*
    this command sorts words based of argv passed in command line

    ./categorize mermaid results/mermaid.csv Elvis results/Elvis.csv results/the_rest.csv
*/

int main(int argc, char *argv[])
{
    char line[80];
    FILE *in;

    if (!(in = fopen("mixed.csv", "r")))
    {
        fprintf(stderr, "Can't open the file.\n");
        return 1;
    }

    FILE *file1 = fopen(argv[2], "w");
    FILE *file2 = fopen(argv[4], "w");
    FILE *file3 = fopen(argv[5], "w");

    while (fscanf(in, "%79[^\n]\n", line) == 1)
        if (strstr(line, argv[1]))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, argv[3]))
            fprintf(file2, "%s\n", line);
        else
            fprintf(file3, "%s\n", line);

    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}