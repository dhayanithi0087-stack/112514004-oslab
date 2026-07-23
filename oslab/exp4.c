#include<stdio.h>
#include<unistd.h>
#include <fcntl.h>
int main()
{
    pid_t pid;
    printf("Program execution started\n");
    /*
    fork()creats a new process
    Return value:
    >0 : Executing in partent process(value is child PID)
    =0 : Executing in child process
    <0 : Process creation failed
    */
   pid=fork();
   if(pid<0)
   {
    printf("Unable to create child process\n");
    return 1;
   }
   /*
   Child process block 
   pid value will be o inside child process
   */
   else if(pid==0)
   {
    printf("\n--Child PROcess---\n");
    printf("Child Process ID:%d\n",getppid());
   }
   /*
   Parent process block
   pid contains the child process ID.
   */
  else
  {
    printf("\n---Parent Process---\n");
    printf("Parent Process ID:%d\n",getpid());
    printf("Child Process ID:%d\n",pid);
  }
  return 0;
}


