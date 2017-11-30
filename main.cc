#include <stdio.h>
#include <stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main(int argc, char const *argv[]) {
  /* code */
  pid_t childPID = fork();

  if(childPID < 0){
    perror("fork() error");
    exit(-1);
  }
  if(childPID != 0){ //parent process
    printf("Parent PID: %d\nChild PID: %d\n", getpid(), childPID);
    int statval;
    wait(&statval); //wait for the child process to join with parent
    printf("Process %d exited with status: %d\n", childPID, WEXITSTATUS(statval));


  }else{//in the child process
    execl("./counter", "./counter", "5", (char*) NULL);

  }

  return 0;
}
