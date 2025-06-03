#include<stdio.h>

void main(){
    printf("Enter a number ");
    int n;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    printf("%d",a);
    int i;
    int temp = 1;
    for(i=0;i<n-1;i++){
        printf("%d",temp);
        temp = a + b;
        a = b;
        b = temp;
    }
}