#include<stdio.h>
#include<dirent.h>
#include <stdlib.h>

void main(){
    char d[10];
    DIR *p;
    struct dirent *d1;
    printf("Enter a Directory name: ");
    scanf("%s",d);
    p=opendir(d);
    if(p==NULL){
        perror("Can't find directory");
        exit(-1);
    }while(d1=readdir(p)){
        printf("%s\n",d1->d_name);
    }
}