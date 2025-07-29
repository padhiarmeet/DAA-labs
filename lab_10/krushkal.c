#include <stdio.h>
#include <stdlib.h>
#define v 4
#define e 6

struct Edge
{
    int source;
    int dest;
    int weight;
};

int comparator(struct Edge* p1,struct Edge* p2){
    return p1->weight - p2->weight;
}

void perfromUnion(int u1,int v1,int parant[],int rank[]){
    u1 = findParant(parant,u1);
    v1 = findParant(parant,v1);

    if(rank[u1] < rank[v1]){
        parant[u1] = v1;
    }
    if(rank[u1] > rank[v1]){
        parant[v1] = u1;
    }
    if(rank[u1] == rank[v1]){
        parant[v1] = u1;
        rank[v1]++;
    }
}

int findParant(int parant[],int i){
    if(parant[i] == i) return i;
    
    parant[i] = findParant(parant,i);
}


void main(){

    struct Edge edges[] = {
        {0,1,1},{1,2,0},{2,3,3},{3,0,9},{1,3,7},{0,2,4}};

    int parant[v];
    int mst[v - 1];

    for(int i = 0;i < v;i++){
        parant[i] = i;
    }

    qsort(edges, sizeof(edges) / sizeof(edges[0]), sizeof(struct Edge), comparator);

    

}