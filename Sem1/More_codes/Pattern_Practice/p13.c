#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);

    //pattern printing starts
    for(int i=1;i<=rows;i++){
        //spaces
        for(int s=1;s<=2*(rows-i);s++){
            printf(" ");
        }
        //left triangle
        for(int l=1;l<=i;l++){
            printf("%c ",64+l);
        }
        for(int r=i;r>=2;r--){
            printf("%c ",63+r);
        }
        printf("\n");
    }
    return 0;
}