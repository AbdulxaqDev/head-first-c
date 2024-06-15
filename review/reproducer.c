#include <stdio.h>

int main()
{
    char product[50];
    while (scanf("%s\n", product) == 1)
        printf("<RE%sRE>\n", product);
    return 0;
}