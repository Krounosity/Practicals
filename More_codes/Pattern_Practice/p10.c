#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);
    //pattern printing starts
    for(int i=1;i<=rows;i++){
        //spaces
        for(int s=2*(rows-i)-1;s>=0;s--){
            printf(" ");
        }
        //asterisks
        for(int j=1;j<=(2*i)-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}