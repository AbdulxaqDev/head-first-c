#include <stdio.h>
#include <string.h>

char *text = "William: SBM GSOH likes sports, TV, dining";

int sports(char *s)
{
    return strstr(s, "sports") != NULL;
}

int arts(char *s)
{
    return strstr(s, "arts") != NULL;
}

void find(int (*match)(char *))
{
    if(match(text))
        puts(text);
}

int main()
{
    int (*pFunc)(char *);
    pFunc = sports; // here the match_fn works as sports.
    
    find(arts);
    find(pFunc);
    
    return 0;
}