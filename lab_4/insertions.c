#include<stdio.h>
#include<time.h>

void main(){

    int arr[9999];
    int n = 9999;
    FILE* file;

    clock_t start,end;

    double cpu_run_time;

    file = fopen('worst_caes.txt','r');

    for(int i = 0;i < 9999;i++){
        fscanf(file,"%d",arr[i]);
    }

    start = clock();
    insertionSort(arr,n);
    end = clock();

    cpu_run_time = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("%f",cpu_run_time);

}
void selectionSort(int arr[],int n){
    int min;
    int temp;
   for(int i = 0;i < n;i++){
    min = i;
    for(int j = i + 1;j < n;j++){
        if(arr[j] < arr[min]){
            min = j;
        }
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
   }
}