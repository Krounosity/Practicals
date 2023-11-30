#include<stdio.h>

int main(){
    int rows;
    printf("Enter the *ODD* number of rows you want\n--> ");
    scanf("%d",&rows);

    //pattern printing starts
    for(int i=1;i<=rows;i++){
        // upper triangle
        if(i<=(rows/2)+1){
            //spaces
            for(int s=rows-i;s>=0;s--){
                printf(" ");
            }
            //asterisks
            for(int star1 = 1; star1 <= i; star1++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            //spaces
            for(int s=1;s<=i;s++){
                printf(" ");
            }
            for(int star2 = 1; star2<=(rows+1)-i; star2++){
                printf("* ");
            }
            printf("\n");
        }
    }
    
    return 0;
}