// Write a program to remove a directory.
#include <stdio.h>
#include <fcntl.h>

void main(){
    char fn[10];
    printf("Enter source filename\n");
    scanf("%s",fn);
    if(remove(fn)==0){
        printf("File removed\n");
    }
    else{
        printf("File cannot be removed.\n");
    }
}