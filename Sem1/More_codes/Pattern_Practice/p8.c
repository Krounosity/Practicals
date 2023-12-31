#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);

    //pattern printing starts
    for(int i=1;i<=rows;i++){
        //spaces
        for(int s=1;s<=i;s++){
            printf(" ");
        }
        //left triangle letters
        for(int l=1;l<=((rows-i)/2)+1;l++){
            printf("%c ",64+l);
        }
        //right triangle letters
        for(int r=((rows-i)/2)+1;r>0;r--){
            printf("%c ",64+r);
        }
        printf("\n");
    }
    return 0;
}