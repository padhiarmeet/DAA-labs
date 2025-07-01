#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
   int data;
   struct Node* next;
}Node;

Node* createNode(int value){
    Node* newNode = (Node*)(malloc(sizeof(Node)));
    newNode -> data = value;
    return newNode;
}

Node* insertAtFirst(Node* frist,int value){
    Node* newNode = createNode(value);
    newNode -> next = frist;
    frist = newNode;
}

Node* insertAtLast(Node* first,int value){
    Node* newNode = createNode(value);
    Node* ptr = first;

    while (first -> next != NULL)
    {
       ptr = ptr ->next;
    }
    ptr -> next = newNode;
}

