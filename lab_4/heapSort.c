#include<stdio.h>

void heapSort(int arr[],int size){
    for(int i = size / 2 -1;i >= 0;i--){
        heapyfy(arr,size,i);
    }

    for(int i = size - 1;i>0;i--){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapyfy(arr,i,0);
    }
}

void heapyfy(int arr[],int size,int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < size && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < size && arr[right] > arr[largest]){
        largest = right;
    } 

    if(i != largest){
        int temp = arr[largest];
        arr[largest] = arr[i];
        arr[i] = temp;

        heapyfy(arr,size,largest);
    }

}

void main(){
    int arr[] = {9,8,7,6,5};
    int n = (sizeof(arr) / sizeof(arr[0]));

    heapSort(arr,n);

    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
}
