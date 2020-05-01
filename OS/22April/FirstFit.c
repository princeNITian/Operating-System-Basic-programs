#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BLOCK 10000

void main(){
srand(time(0));
// Block allocation area goes here..............
int memLeft = BLOCK;
int block[5];
for(int i=0;i<4;i++){
int num = rand() % 10;
block[i]=BLOCK/num;
memLeft = memLeft-block[i];
}
block[4]=memLeft;
printf("The block size are given respectively:\n");
for(int i =0;i<5;i++){
    printf("Block%d----->%d\n",i+1,block[i]);
}
printf("\n--------------------------\n");
// Process allocation are goes here.............
int process[5];
printf("The process size are given respectively:\n");
for(int i =0;i<5;i++){
    int randNum = rand()%1000 + rand()%3000 ;
    process[i]=randNum;
    printf("Process%d----------->%d\n",i+1,process[i]);
}

// First Fit Algorithm goes here>>>>>>>
printf("\n FIRST-FIT ALLOCATION GOES HERE...\n\n");
for(int i =0;i<5;i++){
   int flag=0;
    for(int j=0;j<5;j++){
    if(process[i]<block[j]){
        printf("Process %d is allocated at block %d\n",i+1,j+1);
        block[j]-=process[i];
        flag=1;
         break;
    }
    
    
    }
    if(flag==0){
        printf("Process %d can't be allocated to any block.\n",i+1);
    }
   

}
}