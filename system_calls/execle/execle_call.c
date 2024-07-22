#include <stdio.h>
#include <unistd.h>

int main()
{
  char* env[] = {"save-mode=true", NULL};

  execle("./ap", "./app", "-l", NULL, env);

  puts("[INFO] xecle() failed");
  
  return 1;
}
