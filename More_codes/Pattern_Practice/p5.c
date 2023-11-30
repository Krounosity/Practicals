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
        //letters
        for(int l=1;l<=(2*i)-1;l++){
            printf("%c ",64+l);
        }
        printf("\n");
    }
    return 0;
}