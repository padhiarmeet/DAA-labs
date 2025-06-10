#include <stdio.h>
#include <stdlib.h>

#define size 100
int stack[size];
int top = -1;

void push(int value)
{
    if (top >= size - 1)
    {
        printf("OVerflow thai gyu chhe");
    }
    stack[++top] = value;
    printf("Your element is push sccussfully");
}
int pop()
{
    if (top <= -1)
    {
        printf("Underflow thai gyu chhe");
    }
    printf("Your elemnt - %d is poped sccussfully", stack[top]);
    return stack[top--];
}
int pip()
{
    if (top <= -1)
    {
        printf("Underflow thai gyu chhe");
    }
    printf("Your element - %d is piped sccussfully", stack[top]);
    return stack[top];
}
void display()
{
    if (top >= size)
    {
        printf("Overflow thai gyu chhe");
    }
    int i = top;
    for(i; i >= -1; i--){
        printf("%d \n", stack[i]);
    }
   
}

int main()
{
    int choice;
    int element;
    while (1)
    {
        printf("\n Enter you choice my Megisty\n");
        printf("\n 1 - push \n 2 - pop \n 3 - pip \n 4 - display \n 5 - Terminate\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Element you want display - ");
            scanf("%d", &element);
            push(element);
            break;

        case 2:
            printf("%d", pop());
            break;

        case 3:
            printf("%d", pip());
            break;

        case 4:
            display();
            break;

        case 5:
        exit(0);

        }
    }
    return 0;
}
