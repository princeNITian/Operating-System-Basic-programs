#include<stdio.h>
#include "dec.c"

int fcfs(int ts[],float et[])
{
    int wt[T],tat[T],avwt=0,avtat=0,i,j;
    
    wt[0]=0;    
 
    for(i=1;i<T;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=et[j];
    }
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    for(i=0;i<T;i++)
    {
        tat[i]=et[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\nP[%d]\t\t%f\t\t%d\t\t%d",ts[i],et[i],wt[i],tat[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("\n\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d",avtat);
 
    return 0;
}
