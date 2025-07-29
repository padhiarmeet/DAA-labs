#include <stdio.h>
#include <limits.h>
#define v 5

int prims(int graph[5][5],int start){
    int visited[v] = {0};
    int total_weight = 0;
    int total_edges = 0;

    for(int i = 0;i < v;i++){
        visited[i] = 0;
    }

     visited[start] = 1;
    while (total_edges < v - 1)
    {
        int min_weight = INT_MAX;
        int x = -1;
        int y = -1;
        for(int i = 0;i<v;i++){
    
            if(visited[i]){
                for(int j = 0;j < v;j++){
                    if(!visited[j] && graph[i][j]){
                        
                        if(graph[i][j] < min_weight){
                            min_weight = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }   
        }
        if(x != -1 && y != -1){
                total_weight += graph[x][y];
                total_edges += 1;
                visited[y] = 1;
            }  
    } 
    printf("\ntotal edges = %d",total_edges);
    printf("\ntotal weight = %d",total_weight);
}

void main(){
    int n = 5;
    int m = 5;
    int arr[5][5] = {
        {0,2,0,6,0},
        {2,0,3,8,5},
        {0,3,0,0,7},
        {6,8,0,0,9},
        {0,5,7,9,0},
    };

    prims(arr,0);
};
