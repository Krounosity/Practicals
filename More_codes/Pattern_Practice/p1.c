#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);
    
    // pattern printing starts
    for(int i=1; i<=rows; i++){
        for(int j=5;j>=i;j--){
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}