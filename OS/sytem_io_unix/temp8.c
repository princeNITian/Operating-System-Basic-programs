#include <stdio.h>
#include <dirent.h>
#include<string.h>

void main(){
    DIR *p,*sp;
    struct dirent *d,*dd;
    p=opendir(".");
    while(d=readdir(p))
    {
        printf("%s\n",d->d_name);
        if(!strcmp(d->d_name,".")||!strcmp(d->d_name,".."))
        continue;
        sp=opendir(d->d_name);
        if(sp)
        while(dd=readdir(sp))
        printf("-->%s\n:",dd->d_name);
    }
}