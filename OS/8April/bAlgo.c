#include <stdio.h>
#include <stdlib.h>
#include "dec.c"

int main(){

srand(time(0));
int num;
int current_res_alloc[4];
// Let A,B,C,D are four resources having 15,13,12,14 instances of each repectively.
int total_res_inst[4] = {15,13,12,14};
printf(" Initailly A,B,C,D have the following instances respectively:\n");
for(int i=0;i<4;i++){
    printf(" %0.2d  ",total_res_inst[i]);
}


//--------------MAX ALLOCATION-------------------//
 printf("\n\n MAX Demand of process P1,P2,P3,P4,P5 are respectively: \n");
    // Max demand of each process in the system.

    for(int i = 0; i<PROCESS; i++)
    {
        for(int j =0;j<RESOURCES;j++)
        {
            num = rand()%13;
            // Process Pi may request for at most num instance of Resouce type Rj(A,B,C,D) respectively.
            Max[i][j] = num;
            printf(" %0.2d  ",Max[i][j]);
        }
        printf("\n");
    }
//-----------------------------------------------------------------------------------//
printf("\n Current ALLOCATION of resources to process:\n");

    // Allocation : no of resources of each type currently allocated to each process.
    for(int i = 0; i<PROCESS; i++)
    {
        for(int j =0;j<RESOURCES;j++)
        {
            num = Max[i][j]%4;
            // Process Pi is currently allocated num instance of Resouce type Rj(A,B,C,D) respectively.
            Alloc[i][j] = num;
            printf(" %0.2d  ",Alloc[i][j]);
        }
        printf("\n");
    }
    //-------------------------------------------------------------------------------//
   int temp;
    for(int j=0;j<RESOURCES;j++){
        temp=0;
        for(int i=0;i<PROCESS;i++){
            temp=temp+Alloc[i][j];
        }
        current_res_alloc[j]=temp;
    }
    //------------------------------------------------------------------------//
printf("\n Total Resources allocated of type A,B,C,D respectively are: \n");
for(int i=0;i<4;i++){
    printf(" %0.2d  ",current_res_alloc[i]);
}
printf("\n");

//---------------------------AVAILABLE---------------------------------------------//
printf("\n AVAILABLE Resource Instance of type A,B,C,D respectively are: \n");
for(int i=0;i<4;i++){
    Avail[i]=total_res_inst[i]-current_res_alloc[i];
    printf(" %0.2d  ",Avail[i]);
}
printf("\n");

//-----------------------------NEED---------------------------------------------------//
printf("\n NEED of Processes P1 to P5 respectively are: \n");
for(int i=0;i<PROCESS;i++){
    for(int j=0;j<RESOURCES;j++){
        Need[i][j] = Max[i][j] - Alloc[i][j];
        printf(" %0.2d  ",Need[i][j]);
    }
    printf("\n");
}
printf("\n");

//Till Now we have safe condition. Now allocation of resources to the process will be done.
int noAlloc = 0;
for(int i=0;i<PROCESS;i++){
    int flag=0;
   
    for(int j=0;j<RESOURCES;j++){
        if(Need[i][j]<=Avail[j]){
            flag++;
        }else{
            flag--;
        }
    }
    if(flag==4){
        noAlloc++;
        printf("Resources are allocated to Process P%d.\n",i+1);
        //for(int k=0;k<RESOURCES;k++){
            for(int j=0;j<RESOURCES;j++){
                Avail[j]+=Alloc[i][j];
            }
        
    }
}
if(noAlloc==0){
    printf("\n Resource can't be allocated to any processes.\n");
}

    return 0;
}