#include <stdio.h>
#include <string.h>

int main()
{

    char s1[] = "Name";
    char s2[] = "Name";

    char s3[16] = "Copy 1 | ";
    char s4[] = "Copy 2";
    
    printf("%s\n", s3);
    strcat(s3, s4);
    printf("%s\n", s3);
    // printf("%i\n", strcmp(s1, s2));

    return 0;
}