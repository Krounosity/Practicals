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
        //half triangle
        for(int l=i;l>0;l--){
            printf("%c ",64+l);
        }
        printf("\n");
    }
    return 0;
}