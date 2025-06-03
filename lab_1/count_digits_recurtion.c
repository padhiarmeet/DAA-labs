#include <stdio.h>

int countDigits(int n){
    if(n == 0){
        return count; 
    }
    else{
        count++;
        return countDigits(n / 10);
    }
}
int count;
void main(){
    printf("Enter a number - ");
    int n;
    scanf("%d",&n);
    count = countDigits(n);
    printf("%d",&count);
    
    
}