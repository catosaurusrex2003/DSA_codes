#include<stdio.h>

void printarr(int arr[] ,int siz ){
    for(int i = 0 ; i < siz ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int *arr,int size){
    for(int i = 0 ; i < size ; i ++){
        for(int j = 0 ; j < size - i ; j ++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void main(){
    int arr[] = {5,4,3,2,1} , i , j , k , l , size;
    size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    printarr(arr,size);
}