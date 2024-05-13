#include <stdio.h>

int main()
{
    int num = 0;
    while (scanf("%d\n", &num) == 1)
    {

        if (num == 7)
        {
            fprintf(stderr, "This is error!");
            continue;
        }

        for (int i = 0; i < num; i++)
            printf("word|");
        puts("");
    }
    return 0;
}