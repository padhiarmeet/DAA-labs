#include <stdio.h>

void main(){
printf("Enter a number x: ");
    int x;
    scanf("%d", &x);
printf("Enter a number y: ");
    int y;
    scanf("%d", &y);
    int pow = 1;
    int i;
    for(i=0;i<y;i++){
        pow = pow * x;
    } 
    printf("%d",pow);
}
