
#include<stdio.h>
#include<time.h>


int partition(int arr[] ,int low,int high){
    int pivot = arr[low];
    int k = low + 1;
    int i = high;

   while (k <= i)
   {
    while (arr[k] < pivot || k <= high) k++;
    while (arr[i] >= pivot) i--;  
        
        while (k <= i)
        {
            int temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;

        }
    } 
    int temp1 = arr[i];
    arr[i] = arr[k];
    arr[k] = temp1;
   return i;   
}

void quickSort(int arr[],int low,int high){
    
    if(low < high){
        int pivotIndex = partition(arr,low,high);

        quickSort(arr,low,pivotIndex - 1);
        quickSort(arr,pivotIndex + 1,high);
    }
}

int main(){
    int n = 10000;
    int arr[n] ;
    int i;

    clock_t start,end;
    double cpu_time_used;


    FILE* file;

    file = fopen("worst_case.txt","r");

    for(i = 0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
    }

    start = clock();
    quickSort(arr,0,n);
    end = clock();

    cpu_time_used = ((double) (end - start) / CLOCKS_PER_SEC);
    printf("%f",cpu_time_used);

    fclose(file);

    return 0;

}
