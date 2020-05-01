///#include "Dec.c"
//#include "fcfs.c"
#include "sjf.c"
#include <time.h>
int main(){
	
	srand(time(0));	
	printf("-------------Randomly Allocated Task----------------------");
	for(int i =0;i<TASK;i++){
	task[i] =(int) rand()%100;
	ET[i] = (float)( rand()%50 + 2.5);
	printf("\nTask Id: %d \t Execution time: %f",task[i],ET[i]);
	}
	printf("\n\n\n");
	//printf("-------------FCFS Scheduling Algorithm--------------------");
	//fcfs();
	//sort();


printf("\n------------------SJF Scheduling Algorithm-------------------");
sjf();


	return 0;
}
