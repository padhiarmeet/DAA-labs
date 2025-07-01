#include<stdio.h>

void main(){

    int arr[] = {9, 8, 7, 5, 3, 5, 2, 5};

    int i;
    int j;
    int temp;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n -1; i++){

        for (j = i +1; j < n; j++){
            
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}