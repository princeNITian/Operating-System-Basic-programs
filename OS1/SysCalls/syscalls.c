#include <stdio.h> 
#include <unistd.h> 

int main() 
{ 
  int pid; 
 //pid = fork();
  printf("\n Main Parent Process id : %d\n",getpid() ); 
  printf("\nMain Process  Parent id : %d \n",getppid()); 
  fork(); 
  fork();
    printf("\nAfter fork\n");
    printf("\nChild Process id : %d\n",getpid() ); 
    printf("\nParent Process  id : %d \n",getppid());   
} 

