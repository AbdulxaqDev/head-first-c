#include <stdio.h>
#include <unistd.h>
// #include <getopt.h>

int main(int argc, char *argv[])
{
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d:t")) != EOF)
        switch (ch)
        {
        case 'd':
            delivery = optarg;
            break;
        case 't':
            thick = 1;
            break;
        defautl:
            fprintf(stderr, "Unknown option: '%s'\n", optarg);
            return 1;
        }

    // decrimenting the argc to skip the first argumant of command line arg
    // incrementing the argv, to skip the first CLI argument, which is the file name
    argc -= optind;
    argv += optind;

    if (thick)
        puts("Thick crust.");

    if (delivery[0])
        printf("To be delevired %s. \n", delivery);

    puts("Ingredients: ");

    for (count = 0; count < argc; count++)
    {
        puts(argv[count]);
    }

    return 0;
}