#include <stdio.h>
#include <unistd.h>
#include <wait.h>

void main(){
    int pid;
    pid = fork();
    printf("%d\n",pid);
    if(pid==0){
        printf("From Child process\n");
    
    }else{
        wait(0);
        printf("From parent process\n");
    }
}