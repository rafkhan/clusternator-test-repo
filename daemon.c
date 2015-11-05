#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

  pid_t pid;
  pid_t sid;

  pid = fork();
  if(pid < 0) {
    printf("Error: can not fork");
    exit(-1);
  } else if(pid > 0) {
    printf("Started daemon.");
    exit(0);
  }

  umask(0);

  /* TODO open logs */

  sid = setsid();
  if (sid < 0) {
    exit(-1);
  }

  /* TODO close STDIN/OUT file descriptors here */
  
  return 0;
}
