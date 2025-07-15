#include <stdio.h>

void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int size1 = m - l + 1;
    int size2 = r - m;

    int temp1[size1],temp2[size2];

     printf("%d \n",m);

    for(i = 0;i < size1;i++){
        temp1[i] = arr[l + i];
    }
    for(j = 0;j < size2;j++){
        temp2[j] = arr[m + 1 + j];
    }

     i = 0;
     j= 0;
     k = l;

     while (j < size2 && i < size1)
     {
        if(temp1[i] <= temp2[j]){
            arr[k] = temp1[i];
            i++;
        }
        else{
            arr[k] = temp2[j];
            j++;
        }
        k++;
     }

     while (i < size1)
     {
        arr[k++] = temp1[i++];
     }

     while (j < size2)
     {
        arr[k++] = temp2[j++];
     }
}

void merge_sort(int arr[],int l,int r){
    if (l < r)
    {
     int mid = l + (r - l) / 2;
       
     merge_sort(arr,l,mid);

     merge_sort(arr,mid + 1,r);

     merge(arr,l,mid,r);
    }
}



void main(){
    int arr[] = {1,9,3,4,5,6,7,8,2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr,0,arrSize - 1);

    for(int i = 0;i < arrSize;i++){
        printf("%d ",arr[i]);
    }
}

