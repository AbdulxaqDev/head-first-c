#include <stdio.h>

void fortune_cookies(char msg[])
{
    printf("Message reads: %s.\n", msg);
    printf("msg occupies: %i bytes.\n", sizeof(msg));
    printf("msg stays at: %p\n", msg);
}

        
int main()
{
    
    char quote[] = "Cookies make you fat!";
    fortune_cookies(quote);
    
    return 0;
}