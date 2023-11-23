#include<stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=rows-i;j>1;j--){
            printf(" ");
        }
        for(int k=65;k<=65+i;k++){
            printf("%c",k);
        }
        for(int l=64+i;l>=65;l--){
            printf("%c",l);
        }
        printf("\n");
    }
    return 0;
}