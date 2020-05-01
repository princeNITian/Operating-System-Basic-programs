#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void main()
{
 int pid;
 pid=fork();
 printf("%d\n",pid);
 if(pid==0)
 {
  printf("From child process\n");

  }
 else
  {
   wait(0);
   printf("From parent process\n");

   }
}
