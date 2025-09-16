#include<stdio.h>

void main(){
    int arr[] = {1,5,4,8,9,2,3,4,5};

    int i = 0;
    int j = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++){
            int j = i;
            while (j >0 && arr[j - 1] > arr[j]) {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;
            }
        }

    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}