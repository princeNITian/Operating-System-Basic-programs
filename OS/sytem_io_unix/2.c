#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int pid,pid2;
   pid = getpid();
   pid2 = getppid();
   printf("Parent process id %d",pid);
   printf("\nChild process id %d ",pid2);
    

    return 0;
}