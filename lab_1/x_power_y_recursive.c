#include <stdio.h>

int ans = 1;

int powOfNum(int x,int y){
   if(y == 0){
    return ans;
   } 
   else{
    ans *= x;
    return powOfNum(x,y-1);
   }
}

void main(){
printf("Enter a number x: ");
    int x;
    scanf("%d", &x);
printf("Enter a number y: ");
    int y;
    scanf("%d", &y);
int total = powOfNum(x,y);
printf("%d",total); 
}
