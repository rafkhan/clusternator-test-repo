#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

  pid_t pid;

  pid = fork();
  if(pid < 0) {
    printf("Error: can not fork");
    exit(-1);
  } else if(pid > 0) {
    printf("Started daemon.");
    exit(0);
  }
  
  return 0;
}
