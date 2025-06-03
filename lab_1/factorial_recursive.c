#include <stdio.h>

void main(){
printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int result = fact(n);
    printf("Factorial of %d is %d\n", n, result);
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}