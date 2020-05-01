#include <stdio.h>
#include <unistd.h>

void main(){
    int pid;
    pid=fork();
    if(pid>0){
        printf("From Parent\n");
        printf("Parent process id %d\n",getpid());
    }else
    {
        //sleep(1);
        printf("From Child Process\n");
        printf("Child Process id %d\n",getpid());
    }
    
}