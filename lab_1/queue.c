#include <stdio.h>
#include <stdlib.h>

#define size 100
int queue[size];
int front = -1;
int rear = -1;

void enqueue(int value)
{
   if(front == -1){
    front = 0;
   }
   if(rear >= size -1){
    printf("queue Overflow");
   }
   queue[++rear] = value;
    printf("\nYour element enqueued sccussfully\n");
}   
int dequeue()
{
    if (front == -1)
    {
        printf("Underflow thai gyu chhe");
    }
    printf("Your elemnt - %d is dequeed sccussfully", queue[front]);
    return queue[front++];
}
void display()
{
    int i = front;
    if (front == -1)
    {
        printf("Overflow thai gyu chhe");
    }
    for(i; i <= rear; i++){
        printf("%d \n", queue[i]);
    }
   
}
int main()
{
    int choice;
    int element;
    while (1)
    {
        printf("\n Enter you choice my Megisty\n");
        printf("\n 1 - enqueue \n 2 - dequeue \n 3 - display \n 4 - terminate");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Element you want display - ");
            scanf("%d", &element);
            enqueue(element);
            break;

        case 2:
            printf("%d", dequeue());
            break;

        case 3:
            display();
            break;

        case 4:
        exit(0);

        }
    }
    return 0;
}
