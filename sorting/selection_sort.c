#include<stdio.h>

void printarr(int arr[] ,int siz ){
    for(int i = 0 ; i < siz ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int arr[] , int size){
    for(int i = 0 ; i < size-1  ; i ++){
        int minimum = i;
        for(int j = i+1 ; j < size ; j++){
            if(arr[j]<arr[minimum]){
                minimum = j;
            }
        }
        if(minimum != i ){
            swap(&arr[minimum] , &arr[i]);
        }
        printarr(arr,size);
    }
}  

void main(){
    int arr[] = {5,4,3,2,1} , i , j , size ;
    size = sizeof(arr) / sizeof(arr[0]);
    printarr(arr,size); 
    selection_sort(arr,size);
}