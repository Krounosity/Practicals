#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows you want: ");
    scanf("%d",&rows);
    int num=1;
    //pattern printing starts
    for(int i=1;i<=rows;i++){
        //asterisks
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}