#include"dec.c"

int SJF()
{
  int wt[T],tat[T],avwt=0,avtat=0,i,j;

  for(i=0;i<T;i++)
  {
    for(j=i+1;j<T;j++)
    { 
      if(exec_time[i]>exec_time[j])
     {
      int extm = exec_time[j];
      exec_time[j]= exec_time[i];
      exec_time[i] = extm;

      int tsk = tasksize[j];
      tasksize[j] = tasksize[i];
      tasksize[i]= tsk;
      }
     }
   } 

    wt[0]=0;    
 
    for(i=1;i<T;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=exec_time[j];
    }
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    for(i=0;i<T;i++)
    {
        tat[i]=exec_time[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\nP[%d]\t\t%f\t\t%d\t\t%d",tasksize[i],exec_time[i],wt[i],tat[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("\n\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d",avtat);
 
    return 0;



  }
   
