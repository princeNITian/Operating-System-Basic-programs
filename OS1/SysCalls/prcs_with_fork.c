#include<stdio.h>
#include<unistd.h>

void main()
{
 int pid;
 pid=fork();
 if(pid>0)
 {
  printf("From parent \n");
  printf("Parent process id: %d\n",getpid());

  }
 else
  {
   sleep(1);
   printf("From child \n");
  printf("child process id : %d\n",getpid());

   }
}
