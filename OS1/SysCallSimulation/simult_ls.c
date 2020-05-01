#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
#include<stdlib.h>


void main()
{
 char dirname[10];
 DIR *p;
 struct dirent *d;
 printf("Enter a directory name: ");
 scanf("%s",dirname);
 p=opendir(dirname);
 
 if(p==NULL)
 {
  perror("Can't find directory");
  exit(-1);
  }
 while(d=readdir(p))
  {   
   printf("%s\n",d->d_name);
   }
}
