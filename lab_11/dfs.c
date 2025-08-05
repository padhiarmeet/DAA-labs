# include <stdio.h>
# define size 8

void dfs(int adj[size][size],int visited[size],int target){
    visited[target] = 1;

        printf("Visited Node : %d \n",target + 1);

        for(int i = 0;i < size;i++){
            if(visited[i] != 1 && adj[target][i] != 1){
                dfs(adj,visited,i);
            }
        }
}


void main(){
        int adj[size][size] = {
            {0,1,1,1,1,0,0,0},
            {1,0,0,0,0,1,0,0},
            {1,0,0,0,0,1,0,0},
            {1,0,0,0,0,0,0,1},
            {1,0,0,0,0,0,0,1},
            {0,1,1,0,0,0,1,0},
            {0,0,0,0,0,1,0,1},
            {0,0,0,1,1,0,1,0},
        };

        int visited[size] = {0};

        dfs(adj,visited,0);
}