#include<stdio.h>

void printarr(int arr[] ,int siz ){
    for(int i = 0 ; i < siz ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insertion_sort(int arr[] , int siz ){
    for(int i = 1 ; i < siz ; i++){
        int j = i-1 , element = arr[i] , temp;
        while(j >=0 && arr[j] > element ){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            j--;
            
        }
        printarr(arr , siz);
    }
    printarr(arr , siz);

}

void main(){
    int arr[] = {5,4,3,2,1} , i , j , k , l , siz;
    siz = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr , siz );
}