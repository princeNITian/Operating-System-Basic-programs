// Write a program to open, read and write files and perform file copy.
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
  char buff[1000],fn1[10],fn2[10];
  int fd1,fd2,n;
  printf("Enter source filename:\n ");
  scanf("%s",fn1);
  printf("Enter destination filename:\n ");
  scanf("%s",fn2);
  fd1 = open(fn1,O_RDONLY);
  n = read(fd1,buff,1000);
  fd2 = open(fn2,O_CREAT|O_WRONLY);
 
  n = write(fd2,buff,n);
  close(fd1);
  close(fd2);

}