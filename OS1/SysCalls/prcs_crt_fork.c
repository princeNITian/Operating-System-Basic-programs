#include<stdio.h>
#include<unistd.h>

void main()
{
 
  printf("Before fork \n");
  fork();
  printf("After fork\n\n");


 }

