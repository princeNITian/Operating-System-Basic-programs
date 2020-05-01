#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void main()
{
 char s[10],d[10];
 printf("Enter source Dir name:\n");
 scanf("%s",s);
 printf("Enter New Dir name:\n");
 scanf("%s",d);

 if(rename(s,d)==-1)
 {
  perror(" can't be changed\n");

  }
 else
  {
   
   printf("%s is changed to %s\n\n\n",s,d);

   }
}
