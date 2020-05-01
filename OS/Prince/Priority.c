int Priority(){
int i=0;
for(i=0;i<T;i++){
   for(int j=i+1;j<T;j++){
       if(priority[i]>priority[j]){
           int temp=ET[j];
            ET[j]=ET[i];
	    ET[i]=temp;
	    temp=tasksize[j];
            tasksize[j]=tasksize[i];
	    tasksize[i]=temp;
            temp=priority[j];
            priority[j]=priority[i];
	    priority[i]=temp;
          }

    }

   }
   float texe=0;
	printf("\nAfter Prority\n");
      for(int i=0;i<T;i++){
              texe+=ET[i];
		printf("\ntaskid = %d          execution time = %f        priority=%d\n",tasksize[i],ET[i],priority[i]);
	}
      printf("\nTotal execution time=%f",texe);
}
