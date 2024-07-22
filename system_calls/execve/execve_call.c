#include <stdio.h>
// #include <stdlib.h>
#include <unistd.h>

int main()
{
  char* args[] = {"ls", "-l", NULL};
  char* env[] = {"save-mode=true", NULL};

  execve("./app", args, env);

  puts("[INFO] execve failed!");
  
  return 1;
}
