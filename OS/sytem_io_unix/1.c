#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int pid;
    pid = fork();
    // Process id is less than 0 then exit
    if(pid<0)
    exit(0);
    // pid is 0 then it's child process
    if(pid==0)
    {
    printf("Child process id is : %d\n",getpid());
    }
    // pid is greater than 0 then it is parent process.
    else
    {
        printf("Parent process is : %d\n",getppid());
    }
    

    return 0;
}