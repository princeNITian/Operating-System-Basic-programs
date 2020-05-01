#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void main(){
    int pid;
    pid=fork();
    printf("%d\n",pid);
    if(pid<0){
        printf("Child can't be executed\n");
        exit(-1);

    }else{
        printf("Child created\n");
        exit(0);
    }
}