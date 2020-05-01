#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>



void main()
{
 int pid;
 pid=fork();
 printf("%d\n",pid);
 if(pid==0)
 {
  execve("/bin/date\n",NULL,NULL);
  exit(0);
  }
 else
  {
   
   printf("Parent process: %d\n",pid);

   }
}
