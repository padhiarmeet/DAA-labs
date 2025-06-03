#include<stdio.h>

void main(){
    printf("Enter a number");
    int n;
    scanf("%d", &n);
    int num = 1;
    int i = 1;
    while(i <= n){
        num = num * i;
        i++;
    }
    printf("Factorial of %d is %d", n, num);
}