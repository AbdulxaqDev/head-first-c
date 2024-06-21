#include <stdio.h>
#include <encrypt.h>
#include <checksum.h>
 
/*
 * we can compile this file with libhfsecurity.a 
 * gcc main.c -L . -I . -lhfsecurity -o hide && ./hide
 *
 * -L . tells, libhfsecurity.a is in current directory
 *  in command line it is -lhfsecurity.
 *
 * -I . tells, header files is in current directory 
 * 
 * */

int main()
{

  char msg[] = "Hello there, friends!";
  
  encrypt(msg);
  printf("Encrypted: %s\n", msg);
  printf("%i\n", checksum(msg));
  
  encrypt(msg);
  printf("Decrypted: %s\n", msg);
  printf("%i\n", checksum(msg));

  return 0;
}
