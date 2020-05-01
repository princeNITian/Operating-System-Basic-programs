#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    printf("Before FORK: %d\n",getpid());
    fork();
    //fork();
    printf("After FORK: %d\n",getpid());
    fork();
    //fork();
    printf("After FORK1: %d\n",getpid());

    return 0;
}