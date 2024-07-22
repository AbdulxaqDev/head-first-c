#include "checksum.h"

int checksum(char *m)
{
  int c = 0;
  while(*m){
    c+=c^(int)(*m);
    m++;
  }
  return c;
}
