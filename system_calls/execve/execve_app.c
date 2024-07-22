#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  printf("App name: %s\n", argv[0]);
  
  printf("First arg: %s\n", argv[1]);

  printf("App env 'save-mode': %s\n", getenv("save-mode"));
  
  return 0;
}
