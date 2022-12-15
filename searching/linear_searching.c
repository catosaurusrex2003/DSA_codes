#include<stdio.h>

void main(){
    int arr[] = {123 ,3645 ,231 ,354  ,75} , i , index = 0,foobar=0 , find = 231;
    for(i = 0 ; i < 5 ; i++){
        if(arr[i] == find){
            foobar = 1;
            index = i;
        }
    }
    if(foobar){
        printf("element found at %d",index+1);
    }
}