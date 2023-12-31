#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    // pattern printing starts
    for(int i=1;i<=rows;i++){
        //spaces
        for(int s=rows-i;s>=0;s--){
            printf(" ");
        }
        //letters
        for(int j=0;j<i;j++){
            printf("%c ",64+i);
        }
        printf("\n");
    }
    return 0;
}