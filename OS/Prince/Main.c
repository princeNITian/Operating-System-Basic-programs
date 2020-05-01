#include<time.h>
#include"dec.c"
#include"FCFS.c"
#include"SJF.c"
#include"Priority.c"
int main(){
	srand(time(NULL));
	for(int i=0;i<T;i++){
		tasksize[i]=(int)(rand()%100);
		ET[i]=(float)(2.2+rand()%30);
                priority[i]=(int)(rand()%20);
	}
	for(int i=0;i<T;i++){
		printf("\ntaskid = %d          execution time = %f       priority=%d\n",tasksize[i],ET[i],priority[i]);
	}
	//FCFS();
        //SJF();
        Priority();
	return 0;
}
