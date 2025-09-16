
#include<stdio.h>
#include<time.h>


void selectionSort(int arr[] , int size){
    int i;
    int j;
    for(i = 0; i < size;i++){
        int min = i;
        for(j = i;j < size;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for(i = 0; i <size;i++){
        printf("%d ",arr[i]);
    }
}


int main(){

    int arr[100000] ;
    int i;

    clock_t start,end;
    double cpu_time_used;


     FILE* file;

    file = fopen("worst_case.txt","r");

    for(i = 0;i<100000;i++){
        fscanf(file,"%d",&arr[i]);
    }
    start = clock();
    selectionSort(arr,100000);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%f",cpu_time_used);

    fclose(file);

    return 0;

}
