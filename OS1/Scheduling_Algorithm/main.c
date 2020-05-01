#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "dec.c"
#include"FCFS.c"
#include"SJF.c"
#include "priority.c"
#include "round_robin.c"
int main()
{
 
  srand(time(NULL));
  for(int i=0;i<T;i++)
  {
    tasksize[i] = (int)(rand()%100);
    priority[i] = (int)(rand()%100);
    exec_time[i] = (float)(3.5+rand()%30);
    
    printf("Task: %d Execution-Time: %2f\n",tasksize[i],exec_time[i]);
  }
  
  fcfs(tasksize,exec_time);
  printf("/nAfter sjf");
  SJF();
  printf("/nAfter priority");
  
  Priority();
  printf("/nAfter priority/n");
  round_robin(tasksize,exec_time,T);

}
