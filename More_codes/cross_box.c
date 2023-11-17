#include<stdio.h>


void cross_box(int number);

int main(){
    int height = 7;
    printf("Enter the height of the box: 7\n");
    cross_box(height);
    return 0;
}

void cross_box(int number){
    for(int i=0;i<number;i++){
        if(i==0 || i==(number-1)){
            for(int j=0;j<number;j++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            printf(" \n");
        }
    }
}