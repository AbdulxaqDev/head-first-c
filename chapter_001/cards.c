/*
 * Program to evaluate face values
 * Released under the Any lisance
 * (c) 2024 The Solo Team
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int count = 0;
  while (card_name[0] != 'X' || card_name[0] != 'x') {
    puts("Enter the card name: ");
    scanf("%2s", card_name);
    int val = 0;
    switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'X':
      continue;
      break;
    default:
      val = atoi(card_name);
      if (1 > val || val > 10) {
        fprintf(stderr, "the value is not in the range of 1 and 10\n");
        continue;
      }
    }
    if (2 < val && val < 7) {
      count++;
    } else if (val == 10) {
      count--;
    }
    printf("Current count: %i\n", count);
  }
  return 0;
}
