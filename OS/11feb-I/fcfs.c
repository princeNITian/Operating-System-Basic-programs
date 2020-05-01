#include "Dec.c"
void fcfs(){
    float t_Exec=0;
    for(int i =0;i<TASK;i++){
    t_Exec+=ET[i];
		printf("\n%d Execution Time of Task Id: %d ---> %f",i+1,task[i],t_Exec);
    }

}
