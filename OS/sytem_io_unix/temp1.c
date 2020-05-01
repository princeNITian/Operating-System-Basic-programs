#include <stdio.h>
#include <unistd.h>
int main(){
    printf("\n Parent Process ID  %d",getpid());
    printf("\n Child Process ID %d",getppid());
}