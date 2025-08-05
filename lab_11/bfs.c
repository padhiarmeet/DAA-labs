#include <stdio.h>
#define size 8

int queue[size];

int front = -1;
int rear = -1;

void enqueue(int data)
{
    if (front == -1){
        front = 0;
    }  
    if (rear == size  - 1){
        printf("Overflow thai chhe !");
    }
    queue[++rear] = data;
}

int dequeue()
{
    if (front == -1){
         return -1;
    }
    if (front > size - 1){
        front = -1;
    }
    if(front > rear){
        return -1;
    }
    return queue[front++];
}

int isEmptyy()
{
    return (front == -1 || front > rear);
}

void printQueue()
{
    for (int i = front; i < rear; i++)
    {
        printf("%d ", queue[i]);
    }
}

void bfs(int adj[size][size], int visited[size], int target)
{

    enqueue(target);
    visited[target] = 1;

    while (!isEmptyy())
    {
        int element = dequeue();
        printf(" \n%d ", element);
        
        for (int i = 0; i < size; i++)
        {
            if (visited[i] != 1 && adj[target][i] == 1)
            {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}

void main()
{
    int adj[size][size] = {
        {0, 1, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 0, 0, 1, 0, 0},
        {1, 0, 0, 0, 0, 1, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {1, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 1, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1},
        {0, 0, 0, 1, 1, 0, 1, 0},
    };

    int visited[size] = {0};

    bfs(adj, visited, 0);
}