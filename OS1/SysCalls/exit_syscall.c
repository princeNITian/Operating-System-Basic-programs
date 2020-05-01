#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void main()
{
 int pid,pid1;
 pid=fork();
 printf("%d\n",pid);
 if(pid<0)
 {
  perror("Child can't be executed\n");
  exit(-1);

  }
 else
  {
   
   printf("child created\n");
   exit(0);

   }
}
