#include "encrypt.h"

void encrypt(char *m)
{
  while(*m){
    *m=*m^31;
    m++;
  }
}
