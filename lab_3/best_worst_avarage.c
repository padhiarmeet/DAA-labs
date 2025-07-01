#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE* file;

    //Best case
    file = fopen("best_case.txt","w");
    int i;
    for(int i = 0;i < 100000;i++){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    //Avarage case
    file = fopen("avarage_case.txt","w");
    for(int i = 0;i < 100000;i++){
        fprintf(file,"%d ",rand() % 100000);
    }
    fclose(file);

    //Worst case
    file = fopen("worst_case.txt","w");
    for(int i = 100000;i > 0;i--){
        fprintf(file,"%d ",i);
    }
    fclose(file);
}