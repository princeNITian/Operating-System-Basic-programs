// Using system calls write line of texts in a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

void main(){
    char *buff,fn[10];
    int fd,n,i;
    printf("\nEnter file name ");
    scanf("%s",fn);
    printf("\nEnter text ");
    scanf("%s",buff);
   // fgets(buff,100,stdin);
    fd=open(fn,O_CREAT|O_WRONLY);
    n = write(fd,buff,strlen(buff));
    close(fd);

}
