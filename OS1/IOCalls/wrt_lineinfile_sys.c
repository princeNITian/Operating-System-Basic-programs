#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

void main()
{
  char *buff,fn[10];
  int fd,n,i;
  printf("\nEnter the filename: ");
  scanf("%s",fn);
  printf("\nEnter text");
  scanf("%s",buff);
  fgets(buff,100,stdin);
  fd = open(fn,O_CREAT|O_WRONLY);
  
  n = write(fd,buff,strlen(buff));
  close(fd);

}

