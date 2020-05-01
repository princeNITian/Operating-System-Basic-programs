#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Hello Prince, Before fork\n");
    fork();
    printf("Hi Prince, After fork\n");
}