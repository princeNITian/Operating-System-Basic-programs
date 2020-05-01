#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
#include<stdlib.h>
#include<string.h>



void main()
{
 char fn[10],pat[10],temp[200];
 FILE *fp;

 printf("Enter file  name:\n ");
 scanf("%s",fn);
 printf("Enter file  name:\n ");
 scanf("%s",pat);
 fp=fopen(fn,"r");
 while(!feof(fp))
  {   
  fgets(temp,1000,fp);
  
 if(strcmp(temp,pat))
 {
  printf("%s",temp);
  }
 
   
  }
  fclose(fp);
 
}
