#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);

    // pattern printing starts
    for(int i=1;i<=rows;i++){
        //spaces
        for(int s=2*(rows-i)-1;s>=0;s--){
            printf(" ");
        }
        //left half including the middle
        for(int l=1;l<=i;l++){
            printf("%c ",64+l);
        }
        //right half without the middle
        for(int r=i;r>1;r--){
            printf("%c ",63+r);
        }
        printf("\n");
    }
    return 0;
}