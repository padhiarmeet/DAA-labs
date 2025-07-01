#include<stdio.h>
#include<time.h>


void binarySearch(int arr[],int low,int high,int searchingElement,int size){
    while (low < high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == searchingElement){
            printf("Element found .. . ");
            return;
        }
        if(searchingElement > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }  
    }  
}

void binarySearchRecursive(int arr[],int low,int high,int searchingElement,int size){
    while (low < high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == searchingElement){
            printf("Element found .. . ");
            return mid;
        }
        if(searchingElement > arr[mid]){
            binarySearchRecursive(arr,mid + 1,high,searchingElement,size);
        }
        else{
            binarySearchRecursive(arr,low,mid - 1,searchingElement,size);
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
        printf("File not found !");
    }
    for(int i = 0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
    }
    int searchingElement = 1000;
    start = clock();
    binarySearch(arr,0,n - 1,searchingElement,n);
    end = clock();

    cpu_time_used = ((double) (end - start) / CLOCKS_PER_SEC);
    printf("%f",cpu_time_used);

    fclose(file);

}
