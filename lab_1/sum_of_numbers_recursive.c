#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + fact(n - 1);
    }
}
void main(){
printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int result = fact(n);
    printf("sum of digits %d is %d\n", n, result);
}
