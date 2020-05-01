#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main()
{
  int proc,res; 
  int i,j,running[proc],safe=0,counter=0,exec;
 srand(time(NULL));
 
 proc = 2 + rand()%3;
 res = 2+ rand()%3;
 printf("Process: %d Restype: %d\n",proc,res);
 int max[proc][res], allocation[proc][res], available[res], need[proc][res];
 
 printf("Total available resources\n");
 printf("Type Available\n");
 
 for(i=0;i<res;i++)
 {
   available[i] = (3 +rand()%8);
   printf("%d\t%d\n",i,available[i]);
 }
 
 printf("\nMaximum Resource requirement of process\n");
 printf("Process Resourcetype Requirement\n");
 for(i = 0;i<proc;i++)
 {
   for(j=0;j<res;j++)
   {
     max[i][j] = (2+rand()%9);
     printf("%d\t%d\t%d\n",i,j,max[i][j]);

   }

 }

 printf("\ntotal allocated resources\n");
 printf("Process Resource type Allocated\n");
 for(i=0;i<proc;i++)
 {
    for(j=0;j<res;j++)
    {
      
       if(available[j]==0)
       {
         allocation[i][j]=0;

        }
        else
        {
          allocation[i][j]=(1+rand()%available[j]);
          if(allocation[i][j]>max[i][j])
          {
           allocation[i][j]=(1+rand()%max[i][j]);
           }
         }
         printf("%d\t%d\t%d\n",i,j,allocation[i][j]);

         available[j]-=allocation[i][j]; 

     }

  }
printf("\nNeeded resourcez\n");
 printf("Process Resource_type Need\n");

 for(i=0;i<proc;i++)
 {
   for(j=0;j<res;j++)
   {
    
     need[i][j] = max[i][j] - allocation[i][j];
     printf("%d\t%d\t%d\n",i,j,need[i][j]);
    }

  }

printf("\nAfter allocation available resources\n");
printf("Res_type Available\n");

for(i=0;i<res;i++)
{
  printf("%d\t%d\n",i,available[i]);
}
//isSafe(proc,available,max,allocation,need);
for (i = 0; i < proc; i++) 
	{
        	running[i] = 1;
        	counter++;
    	}

while (counter != 0) 
	{
        	safe = 0;
        	for (i = 0; i < proc; i++) 
		{
            		if (running[i]) 
			{
                		exec = 1;
                		for (j = 0; j < res; j++) 
				{
                    			if (max[i][j] - allocation[i][j] > available[j]) 
					{
                        			exec = 0;
                        			break;
                    			}
                		}
                		if (exec) 
				{
                    			printf("\nProcess%d is executing\n", i + 1);
                    			running[i] = 0;
                    			counter--;
                    			safe = 1;
 
                    			for (j = 0; j < res; j++) 
					{
                        			available[j] += allocation[i][j];
                    			}
			                break;
                		}
            		}
        	}
        	if (!safe) 
		{
            		printf("\nThe processes are in unsafe state.\n");
            		break;
        	} 
		else 
		{
            		printf("\nThe process is in safe state");
            		printf("\nAvailable vector:");
 
            		for (i = 0; i < res; i++) 
			{
                		printf("\t%d", available[i]);
            		}
 
		        printf("\n");
        	}
    	}
    	return 0;


}


