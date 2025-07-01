#include<stdio.h>
#include<time.h>

void main(){

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
    bubble_sort(arr);
    end = clock();

    cpu_time_used = ((double) (end - start) / CLOCKS_PER_SEC);
    printf("%f",cpu_time_used);

    fclose(file);

}

void bubble_sort(int arr[]){
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
}