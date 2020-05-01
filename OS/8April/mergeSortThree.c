#include <stdio.h>
#include <stdlib.h>

int size;
void merge(int arr[],int beg,int mid1,int mid2,int end){
int i =beg, j = mid1+1, k = mid2+1,index=beg,temp[size];
// all the three sub-array has some elements
while((i<j) && (j<k) && (k<=end)){
    if(arr[i]<arr[j] && arr[i]<arr[k]){
        temp[index]=arr[i];
        i++;
    }else if(arr[i]>arr[j] && arr[j]<arr[k]){
        temp[index]=arr[j];
        j++;
    }else if(arr[i]>arr[k] && arr[j]>arr[k]){
        temp[index]=arr[k];
        k++;
    }
    index++;
}

// only left sub array has elements
if(j>mid2 && k>end){
    while(i<=mid1){
        temp[index] = arr[i];
        i++;
        index++;
    }
}
// only mid sub array has elements
if(i>mid1 && k>end){
    while(j <= mid2){
        temp[index] = arr[j];
        j++;
        index++;
    }
}
// only right sub array has elements
if(i>mid1 && j>mid2){
    while(k<=end){
        temp[index] = arr[k];
        k++;
        index++;
    } 
}


// right sub array has not elements 
if(k>end){
    while(i<=mid1 || j<=mid2){
        if(arr[i]<arr[j]){
            temp[index]=arr[i];
            i++;
        }else
        {
            temp[index]=arr[j];
            j++;
        }
        index++;
    }

// left sub array has not elements
if(i>mid1){
    while(j<=mid2 || k<=end){
        if(arr[j]<arr[k]){
            temp[index]=arr[j];
            j++;
        }else
        {
            temp[index]=arr[k];
            k++;
        }
        index++;
        
    }
}

// mid sub array has not elements
if(j>mid2){
    while(i<=mid1 || k<=end){
        if(arr[i]<arr[k]){
            temp[index] = arr[i];
            i++;
        }
        else{
            temp[index] = arr[k];
            k++;
        }
        index++;
    }
    
}
    
}

for(int z=beg;z<index;z++){
    arr[z] = temp[z];
}
}

void MergeSort(int arr[],int l,int r){
if(l<r){
    int factor;
    factor = (r-l)/3;
    int m1 = factor;
    int m2 = 2*factor;
    MergeSort(arr,l,m1);
    //MergeSort(arr,m1+1,m2);
    //MergeSort(arr,m2+1,r);
    merge(arr,l,m1,m2,r);
}
}

void main(){
    int n;
printf("Enter the size of Array: \n");
scanf("%d",&n);
size = n;
int arr[size];
printf("Enter the elements in array: \n");
for(int i =0;i<size;i++){
    scanf("%d",&arr[i]);
}
MergeSort(arr,0,n-1);
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}




}