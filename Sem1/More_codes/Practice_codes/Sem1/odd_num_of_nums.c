#include<stdio.h>

int main(){
    int lines;
    printf("Enter the number of lines: ");
    scanf("%d",&lines);

    for(int i=1; i<=lines;i++){
        for(int spaces = 2*(lines-i); spaces >=1; spaces--){
            printf(" ");
        }
        for(int left = 1; left<=i-1; left++){
            printf("%d",left);
        }
        for(int right = i; right >= 1; right --){
            printf("%d",right);
        }
        printf("\n");
    }
    return 0;
}