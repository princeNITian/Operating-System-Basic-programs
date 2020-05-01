// Write a program to open, read and write files using system calls.
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>


void main(){
    char *buff[100],fn[10];
    int fd,n;
    printf("Enter file name\n");
    scanf("%s",fn);
    fd = open(fn,O_RDONLY);
    n = read(fd,buff,100);
    n = write(1,buff,n);
    close(fd);

}
