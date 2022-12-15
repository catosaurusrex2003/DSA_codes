#include<stdio.h>

void printarray(int *arr , int size ){
    for(int i = 0 ; i < size ; i ++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int A[] , int low , int high){
    int pivot = A[low] , i = low+1 , j = high , temp;
    do{
        while(A[i]<=pivot){
            i++;
        }
        while(A[j]>pivot){
            j--;
        }
        if(i<j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }while(i<j);
    // swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[] , int low , int high){
    int partitionIndex; //index of pivot after partitition
    if(low<high){
        partitionIndex = partition(A,low,high);
        quickSort(A,low,partitionIndex-1); //sort  left subarray
        quickSort(A,partitionIndex+1,high); //sort right subarray
    }
}

void main(){
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    quickSort(arr,0,size-1);
    printarray(arr,size);
}