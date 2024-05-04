#include <stdio.h>
#include <stdlib.h>
#include <math.h>


char *toArray(int number)
{
    int n = log10(number) + 1;
    int i;
    char *numberArray = calloc(n, sizeof(char));
    for (i = n - 1; i >= 0; --i, number /= 10)
    {
        numberArray[i] = (number % 10) + '0';
    }
    return numberArray;
}

int compress(char *chars, int charsSize)
{
    char current = chars[0];
    int charCount = 1, count = 0;

    for (int i = 1; i < charsSize - 1; i++)
    {
        if (current == chars[i])
            charCount++;
        else
        {
            if (charCount > 9)
            {
                count += 3;
            }
            else if (charCount > 1)
                count += 2;
            else
                count++;
            current = chars[i];
            charCount = 1;
        }
    }

    if (charCount > 9)
        count += 3;
    else if (charCount > 1)
        count += 2;
    else
        count++;

    char* array = toArray(1);
    for(int loop = 0; loop < 2; loop++)
      printf("%c \n", array[loop]);

    return count;
}

int main()
{
    char chars1[] = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int chars1l = 7;

    char chars2[] = {'a'};
    int chars2l = 1;

    char chars3[] = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    int chars3l = 13;

    printf("compressed chars1 length is: %d\n", compress(chars1, chars1l));
    printf("compressed chars2 length is: %d\n", compress(chars2, chars2l));
    printf("compressed chars3 length is: %d\n", compress(chars3, chars3l));

    return 0;
}
