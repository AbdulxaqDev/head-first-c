#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

unsigned *slice(const unsigned arr[], unsigned first, unsigned last)
{
    unsigned *sliced = (unsigned *)malloc(sizeof(unsigned) * (last - first));
    unsigned j = 0;

    for (unsigned i = first; i < last; i++)
        sliced[j++] = arr[i];

    return sliced;
}

unsigned *push(unsigned *arr, unsigned size, unsigned new_element)
{
    unsigned *new_arr = (unsigned *)malloc((size + 1) * (sizeof(unsigned)));
    for (unsigned i = 0; i < size; ++i)
        new_arr[i] = arr[i];
    new_arr[size] = new_element;
    return new_arr;
}

unsigned *copy_array(const unsigned *source, size_t length)
{
    unsigned *copy = (unsigned *)malloc(length * sizeof(unsigned));
    for (size_t i = 0; i < length; ++i)
        copy[i] = source[i];
    return copy;
}

void print_arr(unsigned arr[], unsigned length)
{
    printf("[ ");
    for (int i = 0; i < length; i++)
        printf("%i, ", arr[i]);
    printf("]");
    puts("");
}

unsigned queue_duration(size_t length, const unsigned queue[length], size_t idx)
{
    unsigned first = 0;
    unsigned minutes = 0;
    unsigned *sliced = 0;
    unsigned *pushed = 0;
    int isPushed = 0;
    unsigned *copied_queue = copy_array(queue, length);
    int c = 13;
    while (1)
    {
        minutes++;
        first = copied_queue[0] - 1;
        sliced = slice(copied_queue, 1, length);
        if (first == 0 && idx == 0)
            break;
        if (first > 0)
        {
            pushed = push(sliced, length - 1, first);
            copied_queue = pushed;
            isPushed = 1;
        }
        else
        {
            isPushed = 0;
            copied_queue = sliced;
            length--;
        }
        if (idx == 0)
            idx = length;
        idx--;
    }
    free(copied_queue);
    if (isPushed)
        free(sliced);
    else
        free(pushed);

    return minutes;
}

int main()
{

    // unsigned first = 0;
    // unsigned minutes = 0;
    // unsigned *sliced = 0;
    // unsigned length = 5;
    // unsigned *copied_queue = copy_array(arr, length);

    // first = copied_queue[0];
    // sliced = slice(copied_queue, 1, length);
    // copied_queue = push(sliced, length - 1, first);
    // printf("first: %u\n", first);
    // printf("sliced: ");
    // print_arr(sliced, length - 1);
    // printf("new: ");
    // print_arr(copied_queue, length);

    /*
            fixed_test(((unsigned[]){2, 5, 3, 6, 4}), 0,  6);
            fixed_test(((unsigned[]){2, 5, 3, 6, 4}), 1, 18);
            fixed_test(((unsigned[]){2, 5, 3, 6, 4}), 2, 12);
            fixed_test(((unsigned[]){2, 5, 3, 6, 4}), 3, 20);
            fixed_test(((unsigned[]){2, 5, 3, 6, 4}), 4, 17);
    */

    unsigned arr[] = {2, 5, 3, 4, 6};
    unsigned arr1[] = {2, 5, 3, 6, 4};
    unsigned arr2[] = {2, 5, 3, 6, 4};
    printf("\nqueue_duration: %i:%i\n", queue_duration(5, arr, 2), 12);
    printf("\nqueue_duration1: %i:%i\n", queue_duration(5, arr1, 1), 18);
    printf("\nqueue_duration2: %i:%i\n", queue_duration(5, arr2, 3), 20);
    // printf("queue_duration 2: %i\n", queue_duration(3, arr, 2));

    return 0;
}

/*
    get all values in array exept first one,
    move them to first position
    decriment the first array value
    then append it
*/

/*
    [2, 5, 3*, 4, 6] 1
    [5, 3*, 4, 6, 1] 2
    [3*, 4, 6, 1, 4] 3
    [4, 6, 1, 4, 2*] 4
    [6, 1, 4, 2*, 3] 5
    [1, 4, 2*, 3, 5] 6
    [4, 2*, 3, 5] 7
    [2*, 3, 5, 3] 8
    [3, 5, 3, 1*] 9
    [5, 3, 1*, 2] 10
    [3, 1*, 2, 4] 11
    [1*, 2, 4, 2] 12


    [2, 4, 2*]
    [4, 2*, 1]
    [2*, 1, 3]
    [1, 3, 1*]
    [3, 1*]
    [1*, 2]
    [2]
*/