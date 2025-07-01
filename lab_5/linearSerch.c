#include<stdio.h>
#include<time.h>


void linerSearch(int arr[],int searchingElement,int size){
   for(int i = 0;i < size; i++){
        if(arr[i] == searchingElement){
            printf("Found in index - %d\n",i);
            break;
        }
   }
}

void main(){
    int n = 100000;
    int arr[n];

    clock_t start,end;
    double cpu_time_used;


     FILE* file;

    file = fopen("E:/DAA/lab_5/worst_case.txt","r");
    if(!file){
        printf("wertyuiolhgfdfghjk");
    }
    for(int i = 0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
    }
    int searchingElement = 1000;
    start = clock();
    linerSearch(arr,searchingElement,n);
    end = clock();

    cpu_time_used = ((double) (end - start) / CLOCKS_PER_SEC);
    printf("%f",cpu_time_used);

    fclose(file);

}
