#include <stdio.h>

int main()
{
    int nums[] = {1, 2, 3, 4};\
    printf("nums is at %p\n", nums);
    printf("nums + 1 is at %p\n", nums + 1);

    printf("%d\n", nums[3] == *(nums + 3) == *(3 + nums) == 3 [nums]);

    int x = 5;
    int *x_address = &x;

    printf("%ld   %ld\n", sizeof(x_address), sizeof(nums));

    return 0;
}