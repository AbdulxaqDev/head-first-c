#include <stdio.h>

int main () {
    int num = 0;
    while(scanf("%d\n", &num) == 1){
        for (int i = 0; i < num; i++)
           printf("word|");
        puts("");
    }
    return 0;
}