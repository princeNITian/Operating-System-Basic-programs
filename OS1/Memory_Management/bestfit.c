#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 srand(time(NULL));
 int n=6;
 int job[6];
 int jb[6];
 int block[6];
 int bdone[6];
 for(int i=0;i<6;i++)
 {
  job[i]=(int)(rand()%30);
  printf("job %d Memory size %d\n",i,job[i]);

  }
  printf("\n");
 for(int i=0;i<6;i++)
 {
  block[i]=(int)(rand()%60);
  printf("Block %d Memory size %d\n",i,block[i]);

  }
  printf("\n");
  for(int i=0;i<6;i++)
 {
  bdone[i]= -1;
  }

  for(int i=0;i<6;i++)
 {
  jb[i]= -1;
  int k=10000;
  int index = -1;
  for(int j=0;j<6;j++)
  {
  if(bdone[j]==-1&&block[j]>=job[i])
    {
     int var = block[j]-job[i];
     if(var<k)
     {
      k=var;
      index=j;

     }
     
      
    }

   }
   if(index!=-1)
     {
      jb[i]=index;
      bdone[index]=0;
     }

  }
  
  printf("\nJob\tSize\tAllocated Block\tSize\n");
    
  for(int i=0;i<6;i++)
  {
   if(jb[i]>-1){

      printf("%d\t%d\t%d\t%d\n",i,job[i],jb[i],block[jb[i]]);
    }
   else
   {
    printf(" %dJob does not get allocated\n",i);


    }

  }


}
