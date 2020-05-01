#include "Dec.c"
float temp;
void sort(){
 for(int j=0;j<TASK;j++){
            for(int i=j+1;i<TASK;i++){
                if(ET[i]<ET[j]){
                    temp=ET[i];
                    ET[i]=ET[j];
                    ET[j]=temp;
                }
            }
        }

}

void sjf(){
    sort();
     float t_Exec=0;
    for(int i =0;i<TASK;i++){
    t_Exec+=ET[i];
		printf("\nExecution Time Task  %d ---> %f",i+1,t_Exec);
    }
}