#include <stdio.h>

int add(int a, int b){
    return a + b;
}

void addition_with_dis(int a, int b){
    printf("The addition of %i and %i is %i\n", a, b, add(a,b));
}

int main(){
    // addition_with_dis(37, 63);
    
    int i = 10;
    printf("hell\n");
    
    return 0;
}