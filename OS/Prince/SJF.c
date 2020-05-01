int SJF(){
int i=0;
for(i=0;i<T;i++){
   for(int j=i+1;j<T;j++){
       if(ET[i]>ET[j]){
           int temp=ET[j];
            ET[j]=ET[i];
	    ET[i]=temp;
	   temp=tasksize[j];
            tasksize[j]=tasksize[i];
	    tasksize[i]=temp;
          }

    }

   }
	float texe=0;
	printf("\nAfter SJF\n");
   for( i=0;i<T;i++){
		texe+=	ET[i];
		printf("\ntaskid = %d          execution time = %f\n",tasksize[i],ET[i]);
	}
	printf("\nTotal execution time=%f",texe);

}
