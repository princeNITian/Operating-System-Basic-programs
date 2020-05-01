#include<stdio.h>
#include<unistd.h>

void main()
{
 
  printf("\n Parent Process ID %d \n",getppid());
  printf(" Child process id: %d\n",getpid());
}
