#include<stdio.h>
#include<dirent.h>
#include<unistd.h>
#include<stdlib.h>

void main(int argc,char **argv)
{
 int pid,i;
 for(i=0;i<atoi(argv[1]);i++)
 {
   pid=fork();
   if(pid==0)
   {
     printf("child process id %d Parent process %d\n",getpid(),getppid());

    }
  }

}
