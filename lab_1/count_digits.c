#include <stdio.h>

void main(){
    printf("Enter a number - ");
    int n;
    int count = 0;
    scanf("%d",&n);
    while (n != 0)
    {
        n = n / 10;
        count += 1;

    }
    printf("Count of digit is - %d",count);
    
}