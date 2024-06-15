/*
    This is comment
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int count = 0;
    while (card_name[0] != 'x' &&
           card_name[0] != 'X')
    {
        puts("Enter the card_name: ");
        scanf("%2s", card_name);

        int val = 0;

        switch (card_name[0])
        {
        case 'K':
        case 'J':
        case 'Q':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'x':
        case 'X':
            continue;
        default:
            val = atoi(card_name);
            if (val < 1 || 10 < val)
            {
                puts("Enter valid input!");
                continue;
            }
        }

        if (3 <= val && val <= 6)
            count++;
        else if (val == 10)
            count--;
        printf("Current count: %i\n", count);
    }

    return 0;
}