#include <stdio.h>

void main(){
    char s[10],d[10];
    printf("Enter source Dir Name:\n");
    scanf("%s",s);
    printf("Enter New Dir Nmae:\n");
    scanf("%s",d);
    if(rename(s,d)==-1){
        perror("Can't be changed.\n");
    }else{
        printf("%s is changed to %s\n",s,d);
    }
}