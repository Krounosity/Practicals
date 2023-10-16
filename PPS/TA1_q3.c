#include <stdio.h>

int main()
{
    int rows, i, j, k, l, temp;
    printf("Welcome to the number triangle maker! Please enter the number of rows you desire: ");
    scanf("%d", &rows);
    temp=rows;
    for(i = 1; i<=rows; i++){
        for(j = 2; j<=i; j++){
            printf(" ");
        }
        for(k = 1; k<=temp; k++){
            printf("%d",k);
        }
        for(l = temp-1; l>0; l--){
            printf("%d",l);
        }
        printf("\n");
        temp--;
    }
    return 0;
}