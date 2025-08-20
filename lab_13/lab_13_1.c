#include <stdio.h>
#include <stdlib.h>


struct Obj
{
  int value;
  int weight;
};

int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void main(){

    int weights[] = {60,80,100};
    int values[] = {10,20,40};
    int size = sizeof(values) / sizeof(values[0]);
    int totalWeight = 50;
    int currentWeight = 0;
    int totalValue = 0;
    float vByW[size];
    struct Obj arr[size];
    int j = 0;

    for(int i = 0;i < size;i++){
        vByW[i] = values[i] / (float)weights[i];
    }

    for(int i = 0;i < size;i++){
        arr[i].value = values[i];
        arr[i].weight = values[i];
    }

    qsort(arr,size,sizeof(arr[0]),comp);

    for(int i = 0;i < size;i++){
        printf("%d",arr[i].value);
    }

    while(currentWeight != totalWeight){
        if(currentWeight + arr[j].weight <= totalWeight){
            currentWeight += arr[j].weight;
            totalValue += arr[j].value; 
        }
        else{
            totalValue += ((float)(totalWeight - currentWeight) / arr[j].weight) * arr[j].value;
            break;
        }
        j++;
    }
    printf(" total value - %d",totalValue);
}
