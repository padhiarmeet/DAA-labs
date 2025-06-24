#include<stdio.h>

int main(){
    int arr[] = {5,1,9,12,3,6,8,0};
    int i;
    int j;
    for(i = 0; i < (sizeof(arr) / sizeof(arr[0]));i++){
        int min = i;
        for(j = i;j < (sizeof(arr) / sizeof(arr[0]));j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for(i = 0; i < (sizeof(arr)/sizeof(arr[0]));i++){
        printf("%d ",arr[i]);

    }
    return 0;
}