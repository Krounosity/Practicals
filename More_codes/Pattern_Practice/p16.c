#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);
    //pattern printing starts
    for(int i=1;i<=rows;i++){
        //spaces
        for(int s=rows-i-1;s>=0;s--){
            printf(" ");
        }
        //asterisks
        for(int j=1;j<=i;j++){
            printf("$ ");
        }
        printf("\n");
    }
    return 0;
}