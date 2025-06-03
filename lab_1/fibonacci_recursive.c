#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void main(){
    printf("Enter a number ");
    int n;
    scanf("%d", &n);
    int fibb ;
    fibb = fibonacci(n);
    printf("%d",fibb);
}
